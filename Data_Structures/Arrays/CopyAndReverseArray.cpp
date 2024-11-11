/*
You are given an array 'ARR' consisting of 'N' non-negative integers,
 your task is to copy the elements of 'ARR' into another array 'COPY_ARR' in reverse order.

For example:
If 'ARR' contains the following elements [ 1, 2, 3, 4, 5 ], then you should return another array that is equal to [ 5, 4, 3, 2, 1].

*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>arr,int n){

    vector<int>tempArray(n);

    for(int i=0;i<n;i++){

        tempArray[i]= arr[n-i-1];   // This logic is also used to swap elements 
    }                               // in an Array or a String

    for(int i=0;i<n;i++){

        cout<<tempArray[i]<<" "<<endl;
    }
}


int main(){

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The reversed Array is: "<<endl;
    reverseArray(arr,n);
    return 0;
}