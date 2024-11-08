/*
A number is a Palindrome number if the reverse of the number and the numbers itself are equal 
i.e. if the number and its reverse are the same then a number is a palindrome number.

Example :
Number : 12321
Reverse : 12321
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int reverse=0;
    int rem;
    bool isPalindrome;
    cin>>n;
    int givenNumber = n;

    while(n>0){

        rem = n%10;
        reverse = reverse * 10 + rem;
        n/=10;

    }
    cout<<reverse<<endl;

    if(givenNumber!=reverse){
        isPalindrome = false;
    }
    else{
        isPalindrome = true;
    }

    cout<<isPalindrome<<endl;
    return 0;
}