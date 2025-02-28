#include <iostream>
using namespace std;

void czyParzysta(int liczba, bool &parzysta) {
    parzysta = liczba % 2 == 0;
}

int main() {
    int liczba;
    bool parzysta;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    czyParzysta(liczba, parzysta);
    if (parzysta) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }
    return 0;
}