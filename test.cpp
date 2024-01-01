#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> countTasks(const vector<pair<int, int>>& tasks) {
    vector<int> result;

    for (int i = 0; i < tasks.size(); ++i) {
        int givenTaskStartTime = tasks[i].first;
        int givenTaskEndTime = tasks[i].second;

        vector<int> taskStartTimes;
        for (const auto& task : tasks) {
            taskStartTimes.push_back(task.first);
        }

        sort(taskStartTimes.begin(), taskStartTimes.end());

        int count = 0;

        auto startAfter = upper_bound(taskStartTimes.begin(), taskStartTimes.end(), givenTaskStartTime);
        auto endBefore = lower_bound(taskStartTimes.begin(), taskStartTimes.end(), givenTaskEndTime);

        for (auto it = startAfter; it != endBefore; ++it) {
            int index = distance(taskStartTimes.begin(), it);
            if (index != i && tasks[index].second < givenTaskEndTime) {
                count++;
            }
        }

        result.push_back(count);
    }

    return result;
}

int main() {
    // Example usage:
    vector<pair<int, int>> tasks = {
        {1, 5},
        {3, 6},
        {0, 10},
        // Add more tasks as needed
    };

    vector<int> results = countTasks(tasks);

    for (int i = 0; i < results.size(); ++i) {
        cout << "Task " << i << ": " << results[i] << " tasks start after and end before." << endl;
    }

    return 0;
}
