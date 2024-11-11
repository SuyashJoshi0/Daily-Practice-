#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isDuplicate(vector<int>arr){

    unordered_set<int> numSet;

        for(int i:arr){
            if(numSet.find(i)!= numSet.end()){
                return true;
            }
            numSet.insert(i);
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

    if (isDuplicate(arr)) {
        cout << "Duplicate Element Found!" << endl;
    } else {
        cout << "No Duplicate Element Found." << endl;
    }

    return 0;

}