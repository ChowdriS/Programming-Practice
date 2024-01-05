#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,ans=0;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++)    cin>>nums[i];

    for(auto i:nums)    ans^=i;

    cout<<(ans==0?65:66);

}