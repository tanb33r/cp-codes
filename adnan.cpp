#include<bits/stdc++.h>
using namespace std;
bool x[5000][5000];
int main()
{
    int n,no_of_degree,loop,sum_of_degree=0,c=0,no_of_edge=0;
    scanf("%d",&n);
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            x[i][j]=rand()%2;
            x[j][i]=x[i][j];
        }
    }
    clock_t time_start, time_stop;
    time_start = clock();
    for(int i=0; i<n; i++)
    {
        loop=0;
        no_of_degree=0;
        cout<<"Vertex "<<i<<"\t";
        for(int j=0; j<n; j++)
        {
            if(x[i][j])
            {
                no_of_edge++;
                no_of_degree++;
            }
            cout<<x[i][j]<<"  ";
        }
        if(x[i][i])  //check loops in graph
        {
            loop=1;
            c++;
        }
        sum_of_degree+=no_of_degree+loop;
        cout<<"   Number of degree "<<no_of_degree+loop<<endl;
    }
    cout<<"\nSummation of degree of all vertex "<<sum_of_degree<<endl;
    no_of_edge-=c;
    no_of_edge=no_of_edge/2;
    no_of_edge+=c;

    cout<<"\nNumber of edge "<<no_of_edge<<endl;
    if(sum_of_degree==2*(no_of_edge))
    {
        cout<<"Handshaking theorem holds for this graph"<<endl;
    }
    else
    {
        cout<<"Handshaking theorem does not holds for this graph"<<endl;
    }
    time_stop=clock();
    double time=(double)(time_stop-time_start)/CLOCKS_PER_SEC;
    printf("\nTime -> %lfs\n",time);
    return 0;
}
