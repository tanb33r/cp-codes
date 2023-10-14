        
        #include <cstdio> 
        #include <vector>
        using namespace std;

        #define MAX 100000 //maximum node
        vector <int> edges[MAX]; 
        vector <int> weight[MAX];  

        int main() {
          int numNodes, numEdges;
          cin>>numNodes>>numEdges;
          for (int i = 1; i <= numEdges; i++) {
            int x, y,w;
            cin>>x>>y>>w;
            edges[x].push_back(y); 
            weight[x].push_back(w); 
          }
          return 0;
        }

        vector<int> V;

        for(int i = 0;i<n;i++)
        {
          cin>>x;
          V.push_back(x);
        }



