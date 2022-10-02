class LinkedList{
    public:
        int val;
        LinkedList *next;

        LinkedList(){
            val = -1;
            next = NULL;
        }

        TreeNode(int val){
            this->val = val;
            next = NULL;
        }
};