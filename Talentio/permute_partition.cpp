// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     int n,k;
//     cin>>n>>k;

//     vector<int> nums(n);
//     vector<int> high(k);
    
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
    
//     if(k==1){
//         cout<<n<<endl<<"1"<<endl;
//         return;
//     }

//     // sort(nums.begin(),nums.end(),greater<int>());
//     for(int i=n,j=0;i>=0 and j<k ;i--,j++){
//         high[j]=i;
//     }
    
//     bool flag=false;
//     long long ans=1;
//     int cnt=0;
    
//     for(int i=0;i<n;i++){
//         if(binary_search(high.begin(),high.end(),nums[i])){
//             flag=true;
//             ans*=(cnt+1);
//             cnt=0;
//         }
//         else if(flag){
//             cnt++;
//         }
//     }
//     cout<<accumulate(high.begin(),high.end(),0)<<endl;
//     cout<<ans;
    
// }

















#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n,k;
    cin>>n>>k;
 
    vector<int> nums(n);
    vector<int> high(k);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    if(k==1){
        cout<<n<<endl<<"1"<<endl;
        return 0;
    }
 
    int j=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]>(n-k)){
            high[j++]=i;
            sum+=nums[i];
        }
    }

    // for(auto i:high)    cout<<i<<endl;
    
    bool flag=false;
    long long ans=1;
        
    for(int i=1;i<k;i++){
        ans=(ans*(high[i]-high[i-1]))%998244353;
    }
 
    cout<<sum<<" "<<ans;
    
}