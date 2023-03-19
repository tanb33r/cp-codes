#include <stdio.h>
#include <string.h>

char MOC(char c[],int n) {
    int count[125];
    int i=0;
    for(i=0; i<125; i++) {
        count[i]=0;
    }
    for(i=0; i<n; i++) {
        count[c[i]]++;
    }
    int m = 0;
    char ans;
    for(i=0; i<n; i++) {
        if(m<count[c[i]]) {
            m=count[c[i]],ans=c[i];
        }
    }
    return ans;

}
int main() {
    char c[1000];
    scanf("%s",c);

    printf("%c\n",MOC(c,strlen(c)));
}
