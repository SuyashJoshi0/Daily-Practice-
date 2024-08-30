/*
You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, 
and your task is to find whether ‘num’ is present in the array or not.
If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.

Example:
Input: ‘n’ = 5, ‘num’ = 4 
'arr' =  [6,7,8,4,1] 
*/

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int n,int num,vector<int> &arr){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){

    int n, num;
    cout<<"Enter the number of elements of the array:"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Input the number to search for
    cout << "Enter the number to search: ";
    cin >> num;

    // Call the linearSearch function
    int result = linearSearch(n, num, arr);

    // Output the result
    if(result != -1) {
        cout << "Number " << num << " found at index " << result << "." << endl;
    } else {
        cout << "Number " << num << " not found in the array." << endl;
    }

    return 0;

}