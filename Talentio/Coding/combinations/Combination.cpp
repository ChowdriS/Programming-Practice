#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
	if (r > n) return 0;
	if (r == 0 || n == r) return 1;
	double res = 0;
	for (int i = 0; i < r; i++) {
		res += log(n-i) - log(i+1);
	}
	return (int)round(exp(res));
}

void display(vector<vector<int>> teams,int friendship){

    cout<<"Partion will be"<<endl;
    for(auto i:teams){
        cout<<'[';
        for(int j=0;j<i.size();j++){
            if(j!=i.size()-1)   cout<<i[j]<<',';
            else cout<<i[j];
        }
        cout<<']';
    }
    cout<<"\nMaximum no of Friendship is "<<friendship<<endl;

}

int main() {
	int n;
	int r;

    cin>>n>>r;

    if(r==1){
        cout<<nCr(n,r);
    }

    vector<vector<int>> teams(r,vector<int>());
    // maximum contributing partion should be like this
    int players=n;
    // for(int i=0;i<r;i++){
    //     if(i!=r-1){
    //         teams[i].push_back(1);
    //         players--;
    //     }
    //     else{
    //         for(int j=1;j<=players;j++){
    //             teams[i].push_back(j);
    //         }
    //     }
    // }
    
    int temp=ceil(n/r);
    for(int i=0;i<r;i++){
        if(i!=r-1){
            for(int j=1;j<=temp;j++,players--)
            teams[i].push_back(j);
            // players--;
        }
        else{
            for(int j=1;j<=players;j++){
                teams[i].push_back(j);
            }
        }
    }


    
    // maximum friendship
    int maximum_friendship=nCr(n-r+1,2);

    // int minimum=0;
    // for(auto i:teams){
    //     int m=i.size();
    //     minimum+=nCr(m,2);
    // }
    int minimum = r-(n%r) * nCr(n/r,2) + nCr((n%r)*(n/r),2);
    display(teams,maximum_friendship);
    cout<<"Minimum no of friendship "<<minimum<<endl;

	return 0;
}
