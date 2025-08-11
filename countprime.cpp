#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n1, n2;
    cout << "Enter first number n1: ";
    cin >> n1;
    cout << "Enter second number n2: ";
    cin >> n2;

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: \n";
    for (int i = n1; i <= n2; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
