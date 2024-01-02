#include<bits/stdc++.h>
using namespace std;


// int solve(int ind,int n,vector<int> temp,vector<vector<int>> ans){
//     // if(ind==0){
//     //     ans.push_back(temp);
//     //     return;
//     // }
//     // if(ind<0)   return;
//     // for(int i=1;;i++){
//     //     temp.push_back()
//     // }
// }

int main(){

    int n;
    cin>>n;

    if(n%2==1){
        cout<<0<<endl;
    }

    // vector<int> temp(n);
    // vector<vector<int>> ans;
    // solve(1,n,temp,ans);
    else
    cout<<((n%4==0)?int(n/4)-1:int(n/4));

}


// 1 1 11 11
// 2 2 10 10
// 3 3 9 9
// 4 4 8 8
// 5 5 7 7



