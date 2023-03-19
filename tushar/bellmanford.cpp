#include<iostream>
using namespace std;
#define MAX 9999

typedef struct edge {
    int s;
    int d;
    int w;
} edge;

void bellman(int nv,edge e[],int sv,int ne) {
    int u,v,weight,i,j=0;
    int dis[MAX];

    //assigning infinity to the weights
    for(i=0; i<nv; i++) {
        dis[i]=MAX;
    }

    // distance of source vertex is o
    dis[sv]=0;

    //relaxing the edges v-1 time
    for(i=0; i<nv-1; i++) {
        for(j=0; j<ne; j++) {
            u=e[j].s;
            v=e[j].d;
            weight=e[j].w;


            if(dis[u]+weight < dis[v] && dis[u]!=MAX) {
                dis[v]=dis[u]+weight;
            }
        }

    }

    //negative cycle check
    for(j=0; j<ne; j++) {
        u=e[j].s;
        v=e[j].d;
        weight=e[j].w;

        if(dis[u]+weight < dis[v]) {
            cout<<"\nThere is no shortest path.\n";
            return;
        }
    }

    cout<<"\nVertex"<<"  Shortest Cost From Source";
    for(i=0; i<nv; i++) {
        cout<<"\n"<<i<<"\t"<<dis[i];
    }

}


int main() {
    int nv,ne,sv;
    edge e[MAX];

    cout<<"Enter the number of vertex: ";
    cin>>nv;

    printf("Enter the source vertex of the graph: ");
    cin>>sv;

    cout<<"\nEnter no. of edges: ";
    cin>>ne;
    for(int i=0; i<ne; i++) {
        cout<<"\nFor "<<i+1<<"th Edge =>\n";
        cout<<"Enter Source, Destination & Edge Weight :";
        cin>>e[i].s>>e[i].d>>e[i].w;
    }
    bellman(nv,e,sv,ne);
    return 0;
}
