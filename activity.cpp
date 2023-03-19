#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 5; //number of animals;
    int time[5][2]; // come out time and break
    for(int i=0 ; i<n ; i ++) {
        cin>>time[i][0];
        cin>>time[i][1];
        time[i][1] += time[i][0];
        //time the tiger will b available to eat again
    }

// sort() based on ending time
    sort(time,time+n, cmp());

    for(int i=0 ; i<n ; i ++) {
        j = i+1;
        while(time[j][0]>time[i][1])
            j++;
        i = j+1;
    }
}

    n is number of animals
    time[][2] is show up time and time
    the tiger needs to rest after eating it
    Max_food(n, time[][])
    {
        sort time[][] based on time after rest // time[][1]

        for i = 1 to n:
            j = i+1
            while time[j][0] > time[i][1]
                j = j+1
                print ith and jth animal
            i = j+1
    }


