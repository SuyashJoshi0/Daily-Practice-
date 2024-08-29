#include <iostream> 
#include <cmath>
using namespace std; 
  
bool isPrime(int n){
    if (n < 2) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; // Found a divisor, not prime
        }
    }

    return true; // No divisors found, prime number
}

// Driver Code
int main()
{ 
    int n;
    cin >> n;
    bool answer = isPrime(n);
    if(answer){
        cout << n << " is a Prime Number";
    }
    else{
        cout << n << " is not a Prime Number";
    }
    return 0; 
}
