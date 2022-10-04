bool leaf(Tree *leaf){
    if(leaf->left == NULL and leaf->right == NULL)
        return true;
    return false;
}

void LeftBoundary(Tree *node, vector<int> &ans){
    Tree *curr = node->left;
    while(curr){
        if(!leaf(curr)) 
            ans.push_back(curr->data);
        if(curr->left != NULL)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void inOrder(Tree *node, vector<int> &ans){
    if(node == NULL)
        return;
        
    inOrder(node->left, ans);
    if(leaf(node))
        ans.push_back(node->data);
    inOrder(node->right, ans);
}

void RightBoundary(Tree *node, vector<int> &ans){
    Tree *curr = node->right;
    stack<int> st;
    while(curr){
        if(!leaf(curr))
            st.push(curr->data);
        if(curr->right != NULL)
            curr = curr->right;
        else
            curr = curr->left;
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
}

vector<int> boundary(Tree *root)
{
    //Your code here
    
    if(root == NULL)
        return {};
        
    if(leaf(root))
        return {root->data};
        
    vector<int> boundary;
    boundary.push_back(root->data);
    LeftBoundary(root,boundary);
    inOrder(root,boundary);
    RightBoundary(root,boundary);
    
    return boundary;
}