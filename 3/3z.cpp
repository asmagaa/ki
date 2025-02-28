#include <iostream>
using namespace std;

bool czyParzysta(int liczba) {
    return liczba % 2 == 0;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    if (czyParzysta(liczba)) {
        cout << "Liczba jest parzysta." << endl;
    } else {
        cout << "Liczba jest nieparzysta." << endl;
    }
    return 0;
}