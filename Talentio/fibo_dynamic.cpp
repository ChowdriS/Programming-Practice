#include<bits/stdc++.h>
using namespace std;

int fibo(int n,vector<int>& dp){
    if(n==0 or n==1 or n==2)    return dp[n];
    if(dp[n]!=-1)   return dp[n];
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    return dp[n];   
}


int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    int m=fibo(n,dp);
    for(auto i:dp)  cout<<i<<" ";
}