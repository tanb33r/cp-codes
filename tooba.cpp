#include <bits/stdc++.h>
using namespace std;

struct Activity {
    int start,finish;
};

bool cmp(Activity a,Activity b) {
    return a.finish<b.finish;

}
void printMaxActivities(struct Activity arr[], int n) {
    int i, j,cnt=1 ;
    printf ("\nActivities are : ");
    i = 0;
    printf ("( %d , %d )",arr[i].start,arr[i].finish);
    for (j = 1; j < n; j++) {
        if (arr[j].start >= arr[i].finish) {
            printf ("( %d , %d )",arr[j].start,arr[j].finish);
            i = j;
            cnt++;
        }
    }
    printf("\nNumber of activities can be selected: %d", cnt);
}

int main() {
    int n,i,s1,f1;
    scanf("%d",&n);
    struct Activity List[500];
    for(i=0; i<n; i++) {
        scanf("%d %d",&s1, &f1);
        List[i].start=s1;
        List[i].finish=f1;

    }

    sort(List,List + n,cmp);

    printMaxActivities(List, n);

}
