#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

/*
Given an array of size N. 
The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.
*/

int setMaxElement(vector<int>arr,int n){

    int maxValue=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];
        }
    }
    return maxValue;

}
int setMinElement(vector<int>arr,int n){

    int minValue = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<minValue){
            minValue = arr[i];
        }
    }
    return minValue;
}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"MAX ELEMENT is "<<setMaxElement(arr,n)<<endl;
    cout<<"MIN ELEMENT is "<<setMinElement(arr,n)<<endl;
    return 0;
}