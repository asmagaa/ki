#include <iostream>
using namespace std;

int main() {
    int tablica[6] = {1, 2, 2, 3, 4, 4};
    int rozmiar = 6;
    for (int i = 0; i < rozmiar; ++i) {
        for (int j = i + 1; j < rozmiar;) {
            if (tablica[i] == tablica[j]) {
                for (int k = j; k < rozmiar - 1; ++k) {
                    tablica[k] = tablica[k + 1];
                }
                --rozmiar;
            } else {
                ++j;
            }
        }
    }
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    return 0;
}