#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    if(count(nums.begin(),nums.end(),1)==0){
        cout<<"0"<<endl;
    }
    else{
        int zero=0;
        long long  ans=1;
        bool flag = false;
        // int first_one=INT_MAX;
        // int second_one=INT_MAX;
        // int prev=nums[0];
        for(int i=0;i<n;i++){
            // if(nums[i]==1 && first_one==INT_MAX){
            //     first_one=i;
            // }
            // else if(nums[i]==1 and first_one!=INT_MAX){
            //     second_one=i;
            // }
            // else if(nums[i]==0 and first_one!=INT_MAX){
            //     zero++;
            // }
            // if(first_one!=INT_MAX and second_one!=INT_MAX){
            //     ans*=(zero+1);
            //     first_one=i;
            //     second_one=INT_MAX;
            //     zero=0;
            // }
            if(nums[i]==1){
                flag=true;
                ans*=(zero+1);
                zero=0;
            }
            if(flag and nums[i]==0){
                zero++;
            }
        }
        cout<<ans<<endl;
    }

}