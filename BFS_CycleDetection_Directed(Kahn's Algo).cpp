// Kahn's Algorithm

bool isCyclic(int N, vector<int> adj[]){
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

    int cnt=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cnt++;
        for(auto it : adj[node]){
            inDegree[it]--;
            if(inDegree[it]==0){
                q.push(it);
            }
        }
    }
    if(cnt==N)  return false;
    return true;
}