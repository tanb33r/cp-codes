#include <bits/stdc++.h>
using namespace std;
int n, x[40];
int Count=0;
void print_sequence() {
    for (int i=1; i<n+1; i++)
        printf("%d ",x[i]);
    printf("\n");
}
void print_matrix() {
    int ans[n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ans[i][j]=0;
        }
    } // initialize matrix with 0
    for (int i=1; i<n+1; i++) {
        ans[i-1][x[i]-1] = 1;
    } // insert 1 at queen's position

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }//print the matrix
    printf("\n");
}
bool valid(int k) {
    for (int i=1; i<k; i++)
        if (x[i]==x[k] || abs(x[i]-x[k])==abs(k-i)) // column and diagonal check
            return 0;
    return 1;
}

void backtrack(int k) {
    if (k==n) {
        Count++;
        print_sequence();
        print_matrix();
    } else
        for (x[k+1]=1; x[k+1]<=n; x[k+1]++)
            if (valid(k+1))
                backtrack(k+1);
}

int main() {
    printf("Enter the number of queens: ");
    scanf("%d",&n);
    printf("\nThe solution: \n");
    backtrack(0);
       printf("Possible solution way : %d\n",Count);
}
