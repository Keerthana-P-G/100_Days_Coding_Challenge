/*Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.

Input:
         5
       /   \
      1     1
     /       \
    2         2
Output: 
True
Explanation: 
Tree is mirror image of itself i.e. tree is symmetric

Input:
         5
       /   \
      10     10
     /  \     \
    20  20     30
Output: 
False*/


class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool mirror(struct Node* r1,struct Node* r2)
    {
        if(r1==NULL && r2==NULL)
        return true;
        
        if(r1&& r2 && r1->data==r2->data){
            return mirror(r1->left,r2->right) && (mirror(r1->right,r2->left));
        }
        return false;
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    return mirror(root,root);
    }
};