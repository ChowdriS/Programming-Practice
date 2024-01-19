#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    
    if(a==0 and b!=0)   return b;
    if(a!=0 and b==0)   return a;
    return a>b?gcd(a-b,b):gcd(a,b-a);

}

int hcf(int a,int b){
    
    if(a==0 and b!=0)   return b;
    if(a!=0 and b==0)   return a;
    return a>b?hcf(a%b,b):hcf(a,b%a);

}

int main(){

    int a,b;
    cin>>a>>b;

    int ans=__gcd(a,b);

    cout<<"GCD is "<<ans<<endl;

    cout<<"LCM is "<<((a*b)/ans);

}