#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    vector<int>arr(n);
    n = arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end()); 
    
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    return 0;
}
