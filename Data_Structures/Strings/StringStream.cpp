/*
Function Description

Complete the parseInts function in the editor below.

parseInts has the following parameters:

string str: a string of comma separated integers
Returns

vector<int>: a vector of the parsed integers.
Note You can learn to push elements onto a vector by solving the first problem in the STL chapter.
*/



#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>answer;
	stringstream ss(str);
    int num;
    char ch;

    while (ss >> num) {             // Extract the integer
        answer.push_back(num);
        ss >> ch;                   // Ignore the comma
    }

    return answer;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
