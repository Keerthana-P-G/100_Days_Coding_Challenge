/*Given a length n, count the number of strings of length n that can be made using a, b and c with at-most one b and two c allowed.

Example 1:

Input: n = 1
Output: 3
Explanation: Possible strings are: "a",
"b" and "c"

Example 2:

Input: n = 3
Output: 19
Explanation: Number of strings with 3 
occurrances of a: 1
2-a and 1-b: 3
2-a and 1-c: 3
1-a, 1-b and 1-c: 6
1-a and 2-c: 3
1-b and 2-c: 3
So, total number of strings of length 3
is 1 + 3 + 3 + 6 + 3 + 3 = 19*/



long long int countStr(long long int n){
    //complete the function here
    long long ans = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(i + j > n)
                continue;
                
            long long curans = 1;
                
            long long total = n;
            if(j == 2){
                curans = (total * (total - 1)) / 2;
                total -= 2;
            }
            else if(j){
                curans = total;
                --total;
            }
            
            if(i)
                curans *= total;
                
            ans += curans;
        }
}return ans;
}