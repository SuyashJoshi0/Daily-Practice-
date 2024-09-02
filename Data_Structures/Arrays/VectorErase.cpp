/*You are provided with a vector of  integers. 
Then, you are given  queries. For the first query, you are provided with  integer,
 which denotes a position in the vector. The value at this position in the vector needs to be erased.
 The next query consists of  integers denoting a range of the positions in the vector. 
 The elements which fall under that range should be removed. The second query is performed on the updated 
 vector which we get after performing the first query.
 Sample input:
6
1 4 6 2 8 9
2
2 4

Expected Output:
3
1 8 9

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int startIndex, startRange, endRange;
    cin >> startIndex;                      // The position of the element to erase (1-based index)
    cin >> startRange >> endRange;          // The range to erase (1-based indices)

    // Erase the element at the position 'startIndex'
    arr.erase(arr.begin() + startIndex - 1);

    // After erasing the element at 'startIndex', the positions shift by one.
    // So, adjust the range for the next deletion accordingly.
    arr.erase(arr.begin() + startRange - 1, arr.begin() + endRange - 1);

    // Output the size of the updated array
    cout << arr.size() << endl;

    // Output the updated array
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}