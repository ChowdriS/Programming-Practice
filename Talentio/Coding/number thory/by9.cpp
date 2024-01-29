#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 1;
    while(n>0){
        if(n%10 == 9){
            flag=0;
            break;
        }
        n-=9;
    }
    if(flag==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}