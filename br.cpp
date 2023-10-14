// C++ program to print the number of
// leaf nodes of every node
#include <bits/stdc++.h>
using namespace std;

// Function to insert edges of tree
void insert(int x, int y, vector<int> adjacency[])
{
    adjacency[x].push_back(y);
}

// Function to run DFS on a tree
void dfs(int node, int leaf[], int vis[],
         vector<int> adjacency[])
{
    leaf[node] = 0;
    vis[node] = 1;

    // iterate on all the nodes
    // connected to node
    for (auto it : adjacency[node]) {

        // If not visited
        if (!vis[it]) {
            dfs(it, leaf, vis, adjacency);
            leaf[node] += leaf[it];
        }
    }

    if (!adjacency[node].size())
        leaf[node] = 1;
}

// Function to print number of
// leaf nodes of a node
void printLeaf(int n, int leaf[])
{
    // Function to print leaf nodes
    for (int i = 1; i <= n; i++) {
        cout << "The node " << i << " has "
             << leaf[i] << " leaf nodes\n";
    }
}

// Driver Code
int main()
{
    // Given N-ary Tree

    /*     1
         /   \
        2     3
            / | \
            4 5 6 */
/*
1 2
1 3
3 5
3 4


*/


    int N = 4; // no of nodes
    vector<int> adjacency[N + 1]; // adjacency list for tree
   for(int i = 0 ; i<N; i++) {
        int u,v;
        cin>>u>>v;
        u,v;
        adjacency[u].push_back(v);
    }
//    insert(1, 2, adjacency);
//    insert(1, 3, adjacency);
//    insert(3, 4, adjacency);
//    insert(3, 5, adjacency);
//    insert(3, 6, adjacency);

    int leaf[N + 1]; // Store count of leaf in subtree of i
    int vis[N + 1] = { 0 }; // mark nodes visited

    dfs(1, leaf, vis, adjacency);

    printLeaf(N, leaf);

    return 0;
}
