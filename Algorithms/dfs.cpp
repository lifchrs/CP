dfs(int node){
	visited[node]=1;
	for(int to:adjList[node])
		if(!visited[adjList[to]])
			dfs(to);
	}
}
