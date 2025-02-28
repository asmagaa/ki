#include <iostream>
using namespace std;

int poleKwadratu(int bok) {
    return bok * bok;
}

int main() {
    int bok;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> bok;
    cout << "Pole kwadratu wynosi: " << poleKwadratu(bok) << endl;
    return 0;
}