#include <iostream>
#include <vector>
using namespace std;
vector<int> divisor(int n) {
    vector<int> arr;
    for (int i = 1; i <= n; i++) { //start at 1 to avoid division by zero
        if (n % i == 0) {
            arr.push_back(i);
        }
    }
    return arr;
}

int main() {
    int n;
    cout <<"Enter the number for which you wish to find the divisors: ";
    cin >> n;
    vector<int> result = divisor(n);
    cout << "Divisors of " << n << " are: ";
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}
