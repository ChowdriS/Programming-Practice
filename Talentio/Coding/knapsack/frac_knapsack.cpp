#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> value= {60,100,120};
    vector<int> weight= {10,20,30};
    vector<pair<int,pair<int,int>>> mp;
    int cur_weig = 50;
    for(int i=0;i<3;i++){
        mp.push_back({value[i]/weight[i],{value[i],weight[i]}});        
    }
    sort(mp.begin(),mp.end(),greater<pair<int,pair<int,int>>>());
    int profit = 0;
    for(auto i:mp){
        if(i.second.second<=cur_weig){   
            cur_weig-=i.second.second;
            profit+=i.second.first;
        }else{
            profit+=(cur_weig)*(i.first);
            break;
        }
    }
    cout<<profit;
}