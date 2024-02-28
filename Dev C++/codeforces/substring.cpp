#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>> ans;

    int n;
    cin>>n;
    string input;
    cin>>input;

    for(int i=1;i<n;i++){

        vector<int> qp(3,0);

        string ref=input.substr(0,i);
        // cout<<ref<<"-";
        // int temp = i;
        for(int j=1;j<n;j++){
            if(j+i>=(n+1))   break;
            string pat = input.substr(j,i);
            // cout<<pat<<" ";
            if(pat==ref)    qp[1]++;
            else if(pat>ref)    qp[0]++;
            else qp[2]++;
        }
        // cout<<endl;

        ans.push_back(qp);

    }

    for(auto it : ans){
        for(auto iter : it){
            cout<<iter<<" ";
        }
        cout<<endl;
    }

}


