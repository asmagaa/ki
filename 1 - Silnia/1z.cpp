#include <iostream>
using namespace std;

int obliczSilnie(int n) {
    int silnia = 1;
    for (int i = 1; i <= n; ++i) {
        silnia *= i;
    }
    return silnia;
}

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Silnia z " << n << " wynosi: " << obliczSilnie(n) << endl;
    return 0;
}