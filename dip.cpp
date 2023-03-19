#include <stdio.h>
#include <limits.h>
#define V 5
int distance[1000];
int mindistanceance(int distance[],
                    bool sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false &&
                distance[v] <= min)
            min = distance[v], min_index = v;

    return min_index;
}


void printPath(int parent[], int j) {


    if (parent[j] == - 1)
        return;

    printPath(parent, parent[j]);

    printf("%d ", j);
}


int display(int distance[], int n,
            int parent[]) {
    int src = 0;
    printf("Destination Node\t Cost \t\tPath");
    for (int i = 1; i < V; i++) {
        printf("\n%d -> %d \t\t\t %d\t\t%d ",
               src, i, distance[i], src);
        printPath(parent, i);
    }
}

void dijkstraAlgo(int graph[V][V], int src) {


    bool sptSet[V];

    int parent[V];

    for (int i = 0; i < V; i++) {
        parent[0] = -1;
        distance[i] = INT_MAX;
        sptSet[i] = false;
    }

    distance[src] = 0;


    for (int count = 0; count < V - 1; count++) {

        int u = mindistanceance(distance, sptSet);


        sptSet[u] = true;


        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] &&
                    distance[u] + graph[u][v] < distance[v]) {
                parent[v] = u;
                distance[v] = distance[u] + graph[u][v];
            }
    }


    display(distance, V, parent);
}

int main() {

    int graph[V][V] = { { 0, 6, 0, 1, 0 },
        { 6, 0, 5, 2, 2 },
        { 0, 5, 0, 0, 5 },
        { 1, 2, 0, 0, 1 },
        { 0, 2, 5, 1, 0 }
    };
    int m;
    scanf("%d",&m);
    distance[m]+=20;

    dijkstraAlgo(graph, 0);
    return 0;
}
