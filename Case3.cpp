#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial not defined for negative numbers.";
    } else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial = " << factorial;
    }

    return 0;
}