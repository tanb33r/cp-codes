#include <bits/stdc++.h>
using namespace std;
struct Edge {
    int src, dest, weight;
};

struct Graph {

    int V, E;
    Edge* edge;
};

struct subset {

    int parent;
    int rank;
};

Graph* createGraph(int V, int E) {
    Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}

int find(subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent
            = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}

void Union(subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank) {
        subsets[xroot].parent = yroot;
    } else if (subsets[xroot].rank > subsets[yroot].rank) {
        subsets[yroot].parent = xroot;
    } else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int Comp(const void* a, const void* b) {
    Edge* a1 = (Edge*)a;
    Edge* b1 = (Edge*)b;
    return a1->weight > b1->weight;
}

void MST(Graph* graph,int K) {
    int V = graph->V;
    Edge result[V];
    int e = 0;
    int i = 0;
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]),Comp);

    subset* subsets = new subset[(V * sizeof(subset))];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
    while (e<max(V - 1,K) && i<graph->E) {
        Edge next_edge = graph->edge[i++];
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
        if (x != y) {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }

    cout << "The edges of MST:"<<endl;
    int minimumCost = 0;
    for (i = 0; i < e; ++i) {
        cout<<result[i].src <<" --> "<< result[i].dest<<endl;
        minimumCost = minimumCost + result[i].weight;
    }
    cout<<"Minimum Cost: "<<minimumCost<<endl;
}

int main() {
    int V,E,K;
    cin>>V>>E>>K;
    Graph* graph = createGraph(V,E);
    for(int i=0; i<E; i++) {
        int u,v,w;
        cin>>u>>v>>w;
        graph->edge[i].src = u;
        graph->edge[i].dest = v;
        graph->edge[i].weight = w;
    }
    if(K>V-1) {
        cout<<"No possible MST"<<endl;
        return 0;
    }
    MST(graph,K);

    return 0;
}
