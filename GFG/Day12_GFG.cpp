/*Given an array arr of size N, determine whether this array represents an inorder traversal of a BST. 

Note: All keys in BST must be unique.

Example 1:

Input:
N = 3
arr = {2, 4, 5}
Output: 1
Explaination: 
Given array is inorder traversal for the following tree:
    4
   / \
  2   5
Example 2:

Input:
N = 3
arr = {2, 4, 1}
Output: 0
Explaination: 
Given array can not represent any BST.*/

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        for(int i=1;i<N;i++)
        {
            if(arr[i]<=arr[i-1])
            return 0;
        }
        return 1;
    }
};