/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

Example 3:

Input: s = "A", numRows = 1
Output: "A"*/

class Solution {
    public String convert(String s, int numRows) {
        int n = s.length();
        StringBuffer [] arr = new StringBuffer[numRows]; 
        for(int i=0; i<numRows; i++) 
        arr[i] = new StringBuffer();

        int i=0;
        while(i<n)
        {
            for(int ind=0; ind<numRows && i<n; ind++){
                arr[ind].append(s.charAt(i++));
            }
            for(int ind=numRows-2; ind>0 && i<n; ind--){
                arr[ind].append(s.charAt(i++));
            }
        }
        StringBuffer ans = new StringBuffer();
        for(StringBuffer L : arr)
        {
            ans.append(L);
        }
        return ans.toString();
    }
}