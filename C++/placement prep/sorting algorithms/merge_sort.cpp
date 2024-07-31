#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums,int low, int mid, int high) {

    // for(auto iter:nums){
    //     cout<<iter<<" ";
    // }
    // cout<<endl;

    vector<int> temp(high-low+1);

    int i = low;
    int j = mid+1;
    int k = 0;

    while(i<=mid && j<=high){
        if(nums[i]<nums[j]){
            temp[k++] = nums[i++];
        }
        else {
            temp[k++] = nums[j++];
        }
    }

    while(i<=mid){
        temp[k++] = nums[i++];
    }
    while(j<=high){
        temp[k++] = nums[j++];
    }

    for(int i = low; i<= high; i++) {
        nums[i] = temp[i-low];
    }

}

void merge_sort(vector<int>& nums,int low,int high) {
    if(low<high){
        int mid = low + (high-low)/2;
        merge_sort(nums,low,mid);
        merge_sort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
}

int main(){

    int n = 6;

    vector<int> nums(n);

    // for(auto iter : nums) {
    //     cout<<iter<<endl;
    // }

    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }

    merge_sort(nums,0,n-1);

    for(auto iter : nums) {
        cout<<iter<<" ";
    }

}