/*Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers. If both M and N are the same then return -1 in this case.

Example 1: 

Input: 
M = 11, N = 9
Output: 
2
Explanation: 
Binary representation of the given numbers are: 1011 and 1001, 2nd bit from right is different.

Example 2:

Input: 
M = 52, N = 4
Output: 
5
Explanation: 
Binary representation of the given numbers are: 110100 and 0100, 5th-bit from right is different.*/



//User function Template for Java

class Solution
{
    //Function to find the first position with different bits.
    public static int posOfRightMostDiffBit(int m, int n)
    {
            
        // Your code here  
        if(m==n)
        return -1;
        int pos = 1;
        int x = m^n;
        while((x&1)!=1)
        {
            pos++;
            x/=2;
        }
        return pos;
            
    }
}
