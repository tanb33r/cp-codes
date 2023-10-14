#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

bool find_permutation(vector<int>& nums, int index) {
    if (index == nums.size()) {
        return true;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[i], nums[index]);

        if (is_prime(abs(nums[index] - (index + 1))) && find_permutation(nums, index + 1)) {
            return true;
        }

        swap(nums[i], nums[index]);  // Backtrack
    }

    return false;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Size of the array for each test case

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            nums[i] = i + 1;
        }

        if (find_permutation(nums, 0)) {
            for (int i = 0; i < n; i++) {
                cout << nums[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
