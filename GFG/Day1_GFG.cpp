/*Given two binary trees, the task is to find if both of them are identical or not.
Note: You need to return true or false, the printing is done by the driver code.*/


class Solution
{
    public:
    
    bool same(Node *r1, Node *r2)
    {
        //Your Code here
        if((r1==nullptr) ^ (r2==nullptr))
        return 0;
        
        return (r1==nullptr) or (r1-> data==r2->data);
    }
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1,Node *r2)
    {
        bool a=same(r1,r2);
        if(r1)
        a=a and isIdentical(r1->left,r2->left) and isIdentical(r1->right,r2->right);
        
        return a;
    }
};
