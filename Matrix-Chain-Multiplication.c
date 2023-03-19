#include <stdio.h>

long int m[20][20];
int s[20][20];
int p[20],i,j,n;

void print_optimal(int i,int j) {
    if (i == j)
        printf(" A%d ",i);
    else {
        printf("( ");
        print_optimal(i, s[i][j]); //pre select
        print_optimal(s[i][j] + 1, j); // print
        printf(" )"); //close
    }
}

void matmultiply(void) {
    long int q;
    int k;
    for(i=n; i>0; i--)  //Limit neya
        for(j=i; j<=n; j++)
            if(i==j)
                m[i][j]=0;
            else
                for(k=i; k<j; k++) {
                    q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                    if(q<=m[i][j])
                        m[i][j]=q,s[i][j]=k;
                }

// 4 5 10 15 20 25
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
        printf("\n");
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++)
            printf("%d ",s[i][j]);
        printf("\n");
    }
}

int MatrixChainOrder(int p[], int i, int j) {
    if(i == j)
        return 0;
    int k,min,count;
    for (k = i; k <j; k++) {
        count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k+1, j) + p[i-1]*p[k]*p[j];
        if (count < min) min = count;
    }
    return min;
}

void main() {
    int k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        for(j=i+1; j<=n; j++) {
            m[i][i]=0;
            m[i][j]=999999999;
            s[i][j]=0;
        }
    printf("\nEnter the dimensions: \n");

    for(k=0; k<=n; k++) {
        scanf("%d",&p[k]);
    }

    matmultiply();
    printf("\nCost Matrix M:\n");

    i=1,j=n;
    printf("\nMultiplication Sequence : ");
    print_optimal(i,j);
//MatrixChainOrder(p, 1, n);
    printf("\nMinimum number of multiplications is : %d ",m[i][j]);

}
