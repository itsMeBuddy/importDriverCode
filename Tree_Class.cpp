class Tree{
    public:
        int val;
        Tree *left;
        Tree *right;

        Tree(){
            val = -1;
            left = NULL;
            right = NULL;
        }

        Tree(int val){
            this->val = val;
            left = NULL;
            right = NULL;
        }
};