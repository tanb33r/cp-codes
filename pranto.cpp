#include <stdio.h>
#include <math.h>

int main() {

    int n, decimal = 0;
    int i = 0;

    scanf("%d", &n);
    while (n != 0) {
        decimal =  decimal +(n % 10)* pow(8, i++);
        n = n / 10;
    }
    n = decimal;
    char hexa[100];
    i = 0;
    while(n!=0) {
        int temp  = 0;
        temp = n % 16;
        if(temp < 10) {
            hexa[i] = temp + '0';

        } else {
            hexa[i] = temp + 'A' - 10;
        }
        i++;
        n = n/16;
    }
    int j ;
    for( j=i-1; j>=0; j--)
        printf("%c",hexa[j]);
}

