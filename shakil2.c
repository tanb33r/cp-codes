#include <stdio.h>

int main() {
    char ch[100];
    FILE *fp;

    fp = fopen("Users.txt","w");
    int count=0;
    int c = 0;
    char name[100][30];
    char dob[100][30];
    char occu[100][30];
    while(scanf("%s",ch)) {
        if(c==0) {
            name[count] = ch;
        }
        if(c==1) {
            dob[count] = ch;
        }
        if(c==2) {
            occu[count] = ch;
            count++;
        }
        c++;
        c = c%3;
    }
}
