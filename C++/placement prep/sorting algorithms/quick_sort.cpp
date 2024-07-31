#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[low];
    int i = low+1;
    int j = high;
    while(i<=j) {
        while(i<=j and nums[i]<pivot)   i++;
        while(j>=i and nums[j]>pivot)   j--;
        if(i<=j){
            swap(nums[i],nums[j]);
            i++;j--;
        }
    }
    swap(nums[low],nums[j]);
    return j;
}

void pivot_sort(vector<int>& nums,int low, int high) {
    if(low<high){
        int pivot = partition(nums,low,high);
        pivot_sort(nums,low,pivot-1);
        pivot_sort(nums,pivot+1,high);
    }
}


int main() {

    vector<int> nums = {2,3,4,6,6,9,8};
    int n = nums.size();

    pivot_sort(nums,0,n-1);

    for(auto iter : nums) {
        cout<<iter<<" ";
    }

}