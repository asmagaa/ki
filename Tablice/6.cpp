#include <iostream>
using namespace std;

bool czyPosortowana(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; ++i) {
        if (tablica[i] > tablica[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int tablica[5] = {1, 2, 3, 4, 5};
    if (czyPosortowana(tablica, 5)) {
        cout << "Tablica jest posortowana rosnaco." << endl;
    } else {
        cout << "Tablica nie jest posortowana rosnaco." << endl;
    }
    return 0;
}