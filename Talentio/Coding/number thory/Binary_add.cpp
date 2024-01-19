#include <bits/stdc++.h>
using namespace std;

int main(){
    string binary_1 = "";
    string binary_2 = "";
    cin >> binary_1 >> binary_2;
    int sum = stoi(binary_1,0,2) + stoi(binary_2,0,2);
    bitset<32> binary(sum);
    cout<<binary; 
}