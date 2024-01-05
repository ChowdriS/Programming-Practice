#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=pow(2,i);
    }
    cout<<cnt;

}