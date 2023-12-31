/*Given two BSTs containing N1 and N2 distinct nodes respectively and given a value x, your task is to complete the function countPairs(), that returns the count of all pairs of (a, b), where a belongs to one BST and b belongs to another BST, such that a + b = x.

Example 1:

Input:
BST1:
       5
     /   \
    3     7
   / \   / \
  2   4 6   8
BST2:
       10
     /    \
    6      15
   / \    /  \
  3   8  11   18
x = 16
Output:
3
Explanation:
The pairs are: (5, 11), (6, 10) and (8, 8)
Example 2:

Input:
BST1:
  1
   \
    3
   /
  2
BST2:
    3
   / \
  2   4
 /     
1
x = 4
Output:
3
Explanation:
The pairs are: (2, 2), (3, 1) and (1, 3)*/

class Solution
{
public:
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_map<int, int> f;
        int ans = 0;
        
        function<void(Node*)> dfs1 = [&](Node * node) {
            if(!node)
                return;
                
            f[node -> data]++;
            
            dfs1(node -> left);
            dfs1(node -> right);
        };
        
        dfs1(root1);
        
        function<void(Node *)> dfs2 = [&](Node * node) {
            if(!node)
                return;
                
            if(f.count(x - (node -> data)))
                ans += f[x - (node -> data)];
                
            dfs2(node -> left);
            dfs2(node -> right);
        };
        
        dfs2(root2);
        
        return ans;
    }
};