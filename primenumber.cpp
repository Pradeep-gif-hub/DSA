#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> isprime(int n) {
    vector<int> arr;
    bool prime = true;
    if (n < 2) return arr; //no primes below 2
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    if (prime) {
        arr.push_back(n);
    }
    return arr;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> result = isprime(n);
    if (!result.empty()) {
        cout << n << " is prime" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }
    return 0;
}
