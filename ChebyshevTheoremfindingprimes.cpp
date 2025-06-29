//also known as Bertrand’s Postulate
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//This theorem ays athat for every integer n > 1, there is always at least one prime number p such that:
//n < p < 2n

bool isprime(int num){
    if (num<=1) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int firstPrimeAfterN(int n) {
    for (int i = n+1; i < 2*n; i++) {
        if (isprime(i)) return i;
    }
    return -1; // theoretically won't happen due to Chebyshev's theorem
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int prime = firstPrimeAfterN(n);
    cout << "First prime between " << n << " and " << 2*n << " is: " << prime << endl;
    return 0;
}