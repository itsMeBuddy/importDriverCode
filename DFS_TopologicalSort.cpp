findTopoSort(int node, vector<int> &vis, stack<int> &st, vector<int> adj[]){
    vis[node]=1;
    for(auto it:adj){
        if(!vis[node]){
            findTopoSort(it, vis, st, adj);
        }
    }
    st.push(node);
}

vector<int> topoSort(int N, vector<int> adj[]){
    stack<int> st;
    vector<int> vis(N,0);
    for(int i=0;i<N;i++){
        if(vec[i]==0){
            findTopoSort(i, vis, st, adj);
        }
    }
    vector<int> topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}