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
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = (start + end)/2;
            if(target == nums[mid]){
                return mid;
            }
            if(nums[start] <= nums[mid]){
                if(nums[start]<= target && target <= nums[mid]){
                    end = mid -1;
                }
                else{
                    start = mid + 1;
                }
            }
            else{
                if(nums[mid]<= target && target <= nums[end]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
    return -1;
        
}

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    int target;
    cin>>n;
    cin>>target;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<"The Index of target after rotation is:"<<endl;
    cout<<search(nums,target);
    
    return 0;
}