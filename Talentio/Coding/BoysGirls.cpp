// Problem statement

// During the break, the college students, boys and girls, formed a queue of n people in the canteen. Initially, the students stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second

// Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

// You've got the initial position of the students, at the initial moment of time. Determine the way the queue is going to look after t seconds.
// SAMPLE INP
// 5 1
// BGBGB
// OP:-
// GBGBB


// Explanation:
// After 1 second the string a is GBGBB



#include <bits/stdc++.h>
using namespace std;

int main(){
    string queue = "";
    cin>>queue;
    int t;
    cin>>t;
    int n = queue.size();
    while(t--){
        string temp(queue.begin(),queue.end());
        for(int i=0;i<n;i++){
            if(i!=n-1){
                if(temp[i]=='B' and temp[i+1]=='G'){
                    swap(temp[i],temp[i+1]);
                }
            }
        }
        queue=temp;
    }
    cout<<queue;
}