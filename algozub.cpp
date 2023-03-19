//Directed graph
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<time.h>
int ad_mat[6000][6000];
int i,j,max_vert,interval=1000,nodes,total_time,edge;
double ns=pow(10,9);
double start,end;

int main() {
    printf("Enter Your  Vertices : ");
    scanf("%d",&nodes);
    printf("Enter number of edges : ");
    scanf("%d",&edge);
    int in_deg=0,out_deg=0;
    int num_vert = 0;

    //directed graph
    for(i=0; i<edge; i++) {
        int x,y;
        scanf("%d%d",&x,&y);
        ad_mat[x][y] = 1;
    }

    start=clock();

    for(i=0; i<nodes; i++) { //counting in degree and out degree
        for(j=0; j<nodes; j++) {
            if(ad_mat[i][j]==1) {
                out_deg++;
            }
        }
    }
    for(j=0; j<nodes; j++) {
        for(i=0; i<nodes; i++) {
            if(ad_mat[i][j]==1) {
                in_deg++;
            }
        }
    }
    end=clock();

    if(in_deg==out_deg) { //In degree and Out degree same or not
        printf("In Degree And Out Degree Are Same for %d\n",nodes);
    } else {
        printf("In degree and Out Degree Are Not Same for %d\n",nodes);
    }


    total_time=(end-start)/CLOCKS_PER_SEC*ns;
    printf("%0.0lf\n",total_time);




}
