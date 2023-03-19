#include <bits/stdc++.h>
using namespace std;
int main() {
    FILE  *fp_in, *fp_out ;

    string num1, num2 ;
    int i ;
    fp_in = fopen("DataSet.txt", "r") ;
    fp_out = fopen("out.csv", "w") ;

    while(1) {
//    for (i = 1 ; i <= 1090 ; i++ ) {
        cin>>num1;
        if(num1 != EOF)
            break;
        cin>>num2;
        if(num2 != EOF)
            break;

//        fscanf(fp_in,"%f",  &num1) ;
        /*if (num1 == EOF )
        {
            break;
        }*/
//        fscanf(fp_in,"%f",  &num2) ;
        fprintf(fp_out,"%f,%f\n",num1,num2) ;
    }
    printf("Hi") ;
    fclose(fp_in) ;
    fclose(fp_out) ;

    return 0 ;
}


