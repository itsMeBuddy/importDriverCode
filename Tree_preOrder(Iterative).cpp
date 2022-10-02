vector<int> preOrder_iter(Tree* root) {
        if(root == NULL)
            return {};
        vector<int> preOrder;
        stack <Tree*> st;
        st.push(root);
        while(!st.empty()){
            Tree *temp;
            temp = st.top();
            st.pop();
            preOrder.push_back(temp->val);
            if(temp->right != NULL)
                st.push(temp->right);
            if(temp->left != NULL)
                st.push(temp->left);
        }
        return preOrder;
    }