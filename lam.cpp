#include <bits/stdc++.h>
using namespace std;
int n, x[30];

int solution(int k) {

    return k==n;
}

void print(int k) {
    for (int i=1; i<k+1; i++)
        printf("%d ",x[i]);
    printf("\n");
}

int possible(int k) {
    for (int i=1; i<k; i++)
        if (x[i]==x[k] || abs(x[i]-x[k])==k-i)
            return 0;
    return 1;
}

void backtrace(int k) {
    if (solution(k))
        print(k);
    else
        for (x[k+1]=1; x[k+1]<=n; x[k+1]++)
            if (possible(k+1))
                backtrace(k+1);
}

int main() {
    char ch;
    printf("Enter the number of queens: ");
    scanf("%d",&n);
    printf("\nThe solution: \n");
    backtrace(0);
}
