/*
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isDuplicate(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }

    return false;
}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Duplicate Element is"<<endl;
    cout<<isDuplicate(arr,n);
    return 0;

}