/*
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s){

    int start=0;
    int end = s.length()-1;
    int mid = (start+end)/2;

    while(start<end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start]!=tolower(s[end]))){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){

    string s;
    getline(cin,s);
    if(isPalindrome(s)){
        cout<<"Given string is a valid palindrome"<<endl;
    }
    else{
        cout<<"Given string is not a palindrome"<<endl;
    }

    return 0;
}