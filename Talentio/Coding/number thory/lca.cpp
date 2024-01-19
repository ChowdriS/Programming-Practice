#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string ans="";
    string longestCommonSubsequence(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        vector<vector<string>> dp(m+1,vector<string>(n+1,""));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+s1[i-1];
                }
                else{
                    if(dp[i-1][j]<dp[i][j-1]){
                        dp[i][j]=dp[i][j-1];
                    }else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
        }
        return dp[m][n];
    }
};


int  main(){
    Solution obj;
    cout<<obj.longestCommonSubsequence("rishabh","trishya")<<endl;
    cout<<obj.ans;
}