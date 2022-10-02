vector<vector<int>> levelOrder_iter(Tree* root) {   
    queue<Tree*> q;
    vector<vector<int>> ans;
    if(root==NULL)
        return ans;
    q.push(root);
    
    while(!q.empty()){
        int size;
        size = q.size();
        vector<int> currLevel;
        for(int i=0;i<size;i++){
            Tree *temp = q.front();
            q.pop();
            currLevel.push_back(temp->val);
            if(temp->left != NULL)
                q.push(temp->left);
            if(temp->right != NULL)
                q.push(temp->right);
        }
        ans.push_back(currLevel);
    }
    return ans;
}