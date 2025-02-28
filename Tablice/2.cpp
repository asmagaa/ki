#include <iostream>
using namespace std;

int main() {
    float tablica[3] = {1.5, 2.5, 3.5};
    float suma = 0;
    for (int i = 0; i < 3; ++i) {
        suma += tablica[i];
    }
    cout << "Suma elementow tablicy wynosi: " << suma << endl;
    return 0;
}