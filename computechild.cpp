ll computeSubtree( int node, int parent) {
    subtree[node] = 1;
    for(auto i : graph[node]) {
        if(i == parent) continue;
        subtree[node] += computeSubtree(i, node);
    }
    return subtree[node];
}
