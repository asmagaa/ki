#include <iostream>
using namespace std;

void poleKwadratu(int bok, int &pole) {
    pole = bok * bok;
}

int main() {
    int bok, pole;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> bok;
    poleKwadratu(bok, pole);
    cout << "Pole kwadratu wynosi: " << pole << endl;
    return 0;
}