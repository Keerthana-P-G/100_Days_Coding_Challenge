/*Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j if and only if either j = i + 1 or j = 3 * i. The task is to find the minimum number of edges in a path from vertex 1 to vertex n.

Example 1:

Input:
n = 9
Output:
2
Explanation:
Many paths are possible from 1 to 9.
Shortest one possible is,
1 -> 3 -> 9, of length 2.
Example 2:

Input:
n = 4
Output:
2
Explanation:
Possible paths from 1 to 4 are,
1 -> 2 -> 3 -> 4 and
1 -> 3 -> 4.
Second path of length 2 is the shortest.*/


class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        int ans = 0;
        while(n >= 3)
        {
            ans += n % 3 + 1;
            n /= 3;
        }
        return ans + (n - 1);
    }
};
