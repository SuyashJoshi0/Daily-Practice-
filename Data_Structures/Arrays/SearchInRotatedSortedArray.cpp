/*
Given the array nums after the possible rotation and an integer target,
return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

*/

int search(vector<int>& nums, int target) {
    int start =0;int index = 0;
    int end = nums.size();
    int mid = (start + end)/2;

    while(start <= end){
        if(target == nums[mid]){
            mid = index;
        }
        else if(target < nums[mid]){
            end--;
        }
        else{
            start++;
            }
        }
    return index;
        
    }



#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    int target;
    cin>>n;
    
    return 0;
}