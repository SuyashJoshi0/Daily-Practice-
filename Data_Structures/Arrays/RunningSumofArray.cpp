/*
Given an array of size N, find the sum of its elements.

Sample Input 1:
5
1 2 3 4 5 
Sample Output 1:
15
Sample Input 2:
4
-1 5 3 0
Sample Output 2:
7

 */



#include <iostream>
using namespace std;

int arraySum(int n,int arr[]){

    int sum=0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    return sum;
}

int main() {

    int n;
    cout << "To find the running sum of the elements of the array" << endl;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n]; // Now the size of the array is known

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout<<arraySum(n, arr);

    return 0;
}