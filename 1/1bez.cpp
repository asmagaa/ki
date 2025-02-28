#include <iostream>
using namespace std;

void obliczSilnie(int n, int &wynik) {
    wynik = 1;
    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }
}

int main() {
    int n, wynik;
    cout << "Podaj liczbe: ";
    cin >> n;
    obliczSilnie(n, wynik);
    cout << "Silnia z " << n << " wynosi: " << wynik << endl;
    return 0;
}