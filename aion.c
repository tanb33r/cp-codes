#include <stdio.h>
#include <stdbool.h>

int main() {
    FILE  *fp_in, *fp_out ;

    float num1, num2 ;
    int i ;
    fp_in = fopen("DataSet.txt", "r") ;
    fp_out = fopen("outt.txt", "w") ;
     fprintf(fp_out,"asdasd\n");
    bool b = 1;
//    num1 = getc(fp_in);
//
    char a[3000];
    double data[3000];
    while(fscanf(fp_in, "%s", &a) != EOF) {


        if(b)
            fprintf(fp_out,"%s,",a) ;
        else
            fprintf(fp_out,"%s\n",a) ;
        b = !b;

    }


    printf("Hi") ;
    fclose(fp_in) ;
    fclose(fp_out) ;

    return 0 ;
}


