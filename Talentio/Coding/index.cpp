#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string direction;
    cin>>direction;
    vector<int> point(2,0);
    
    int n=direction.size();
    
    for(int i=0;i<n;i++){
        if(direction[i]=='N')  point[1]+=direction[++i]-'0';
        else if(direction[i]=='S')  point[1]-=direction[++i]-'0';
        else if(direction[i]=='E')  point[0]+=direction[++i]-'0';
        else if(direction[i]=='W')  point[0]-=direction[++i]-'0';
    }
    cout<<point[0]<<" "<<point[1]<<endl;
    if(point[0]==0 and point[1]==0){
        cout<<"In Origin";
    }
    // else if(point[0]>=0 and point[1]>=0){
    //     cout<<"In East";
    // }
    // else if(point[0]<=0 and point[1]<=0){
    //     cout<<"In Origin";
    // }
    // else if(point[0]<=0 and point[1]<=0){
    //     cout<<"In Origin";
    // }
    else{
        cout<<"Not in Origin";
    }

    return 0;
}
