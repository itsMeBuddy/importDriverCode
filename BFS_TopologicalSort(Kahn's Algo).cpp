vector<int> topoSort(int N, vector<int> adj[]){
    queue<int> q;
    vector<int> inDegree(N, 0);
    for(int i=0;i<N;i++){
        for(auto it: adj[i]){
            inDegree[it]++;
        }
    }

    for(int i=0;i<N;i++){
        if(inDegree[i]==0){
            q.push(i);
        }
    }
    
    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it : adj[node]){
            inDegree[it]--;
            if(inDegree[it]==0){
                q.push(it);
            }
        }
    }

    return topo;
}