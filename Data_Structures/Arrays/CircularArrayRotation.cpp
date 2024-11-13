#include <iostream>
#include <vector>
using namespace std;


vector<int> circularArrayRotation(vector<int> arr, int k, vector<int> queries) {
    int n=arr.size();
     k = k % n;
     
    int last = arr[n-1];
     vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        int queryIndex = queries[i];
        // Get the element at the rotated position
        result.push_back(arr[(queryIndex - k + n) % n]);  // Rotate by k to the right
    }     
    return result;
}

int main(){

    int n,k,q;

    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>k;

    cin>>q;
    vector<int> queries(q);
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }

    cout<<"Array after rotation of k positions:"<<endl;
    vector<int> result = circularArrayRotation(arr, k, queries);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    cout<<endl;

    return 0;
}