#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {

    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){

    int n;
    cout << "Enter the number of elements of the array:" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The largest element in the array is: " << endl;
    cout << largestElement(arr, n);

    return 0;
}