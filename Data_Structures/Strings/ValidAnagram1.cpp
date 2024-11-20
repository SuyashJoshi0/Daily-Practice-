/*
Given two strings s and t, return true if t is an 
anagram of s, and false otherwise.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/


#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s,string t){

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s == t;
}

int main(){

    string s,t;
    cin>>s;
    cin>>t;
    
    if(isAnagram){
        cout<<"Given string is Anagram"<<endl;
    }
    else{
        cout<<"Given string is not an Anagram"<<endl;
    }
    return 0;
}
