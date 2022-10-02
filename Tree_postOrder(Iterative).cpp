vector<int> postOrder_iter(Tree* root) {
        
    if(root==NULL)
        return {};
    
    stack<Tree*> st1;
    vector<int> postOrder;
    st1.push(root);
    
    while(!st1.empty()){
        Tree *temp = st1.top();
        postOrder.push_back(temp->val);
        st1.pop();
        if(temp->left != NULL)
            st1.push(temp->left);
        if(temp->right != NULL)
            st1.push(temp->right);
    }
    reverse(postOrder.begin(),postOrder.end());
    return postOrder;
}