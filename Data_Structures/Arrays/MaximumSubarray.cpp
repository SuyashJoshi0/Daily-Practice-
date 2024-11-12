/*
Given an integer array nums, find the subarray
with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int maxSubarray(vector<int>arr){
    int maxTillNow = INT_MIN;
    int sum = 0;

    for(auto i : arr)
        sum = max(i ,sum + i),
        maxTillNow = max(maxTillNow,sum);
    return maxTillNow;
}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximun sum of subarray is:"<<endl;
    cout<<maxSubarray(arr);
    return 0;
}