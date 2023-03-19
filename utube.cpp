	
	3 3  //3 nodes and 3 edges
    1 2  //node1-node2
    2 3 
    1 3 

	int N,E;
	int array[N][N]={0};
	cin>>N>>E;
	for(int k=0;k<E;k++)
	{
		int i,j;
		cin>>i>>j; 
		array[i][j]=1;
		array[j][i]=1;
	}

    3 3  //3 nodes and 3 edges
    1 2 5 //node1-node2-weight
    2 3 8
    1 3 3

    int N,E,inf=1e7;
	int array[N][N];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)array[i][j]=inf;
	cin>>N>>E;
	for(int k=0;k<E;k++)
	{
		int i,j,weight;
		cin>>i>>j>>weight; 
		array[i][j]=weight;
		array[j][i]=weight;
	} 
