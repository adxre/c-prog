#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b, c;
    cout << "Enter two numbers a and b: ";
    cin >> a >> b;
    cout << "Amount of prime numbers between " << a <<" and " << b << " are: ";
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            c++;
        }
    }
    cout << c << " ";
    cout << endl;
    cin.get();cin.get();
}
