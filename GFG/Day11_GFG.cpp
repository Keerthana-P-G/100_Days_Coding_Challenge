/*Given a Binary Search Tree that contains unique positive integer values greater than 0. The task is to complete the function isDeadEnd which returns true if the BST contains a dead end else returns false. Here Dead End means a leaf node, at which no other node can be inserted.

Example 1:

Input :   
               8
             /   \ 
           5      9
         /  \     
        2    7 
       /
      1     
          
Output : 
Yes
Explanation : 
Node 1 is a Dead End in the given BST.
Example 2:

Input :     
              8
            /   \ 
           7     10
         /      /   \
        2      9     13

Output : 
Yes
Explanation : 
Node 9 is a Dead End in the given BST.*/

class Solution{
  public:
    bool helper(Node * node, int MIN, int MAX){
    if(!node)
        return 0;
            
    if(node -> data == MIN and node -> data == MAX)
        return 1;
            
    return helper(node -> left, MIN, node -> data - 1) or helper(node -> right, node -> data + 1, MAX);    
    }
    
    bool isDeadEnd(Node *root)
    {
        return helper(root, 1, 1e8);
    }
};