#include <iostream>
using namespace std;
int exponential(int n, int k) {
    int ans = 1;
    for(int i = 0; i < k; i++) {
        ans = ans * n;
    }
    return ans;
}
int main() {
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power for the exponent: ";
    cin >> k;
    cout << "Result: " << exponential(n, k) << endl;
    return 0;
}
