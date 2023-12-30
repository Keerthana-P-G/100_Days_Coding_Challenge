/*Given an array of n names arr of candidates in an election, where each name is a string of lowercase characters. A candidate name in the array represents a vote casted to the candidate. Print the name of the candidate that received the maximum count of votes. If there is a draw between two candidates, then print lexicographically smaller name.

Example 1:

Input:
n = 13
arr[] = {john,johnny,jackie,johnny,john 
jackie,jamie,jamie,john,johnny,jamie,
johnny,john}
Output: john 4
Explanation: john has 4 votes casted for 
him, but so does johny. john is 
lexicographically smaller, so we print 
john and the votes he received.

Example 2:

Input:
n = 3
arr[] = {andy,blake,clark}
Output: andy 1
Explanation: All the candidates get 1 
votes each. We print andy as it is 
lexicographically smaller.*/

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int> votes;
        
        for(int i = 0; i < n; i++)
            ++votes[arr[i]];
            
        int best = 0;
        vector<string> ans(2);
        
        for(auto i : votes){
            if(i.second > best){
                best = i.second;
                ans[0] = i.first;
                ans[1] = to_string(best);
            }
            else if(i.second == best and i.first < ans[0]){
                ans[0] = i.first;
            }
        }
        
        return ans;
    }
};
