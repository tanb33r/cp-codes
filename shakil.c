#include <stdio.h>
#include <string.h>

int substring(char s1[], char s2[],int n,int m) {
    int i;
    for (i = 0; i <= m - n; i++) {
        int j;

        for (j = 0; j < n; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == n)
            return i;
    }

    return -1;
}
int main() {

    char s1[100],s2[100];
    printf("Enter substring 1:\n");
    scanf("%s",s1);
    printf("Enter substring 2:\n");
    scanf("%s",s2);
    int n = strlen(s1);
    int m = strlen(s2);
    int ans =  substring(s1,s2,n,m);
    printf("%d",ans);
}
