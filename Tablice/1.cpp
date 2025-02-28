#include <iostream>
using namespace std;

int main() {
    int tablica[5];
    for (int i = 0; i < 5; ++i) {
        tablica[i] = i + 1;
    }
    for (int i = 0; i < 5; ++i) {
        cout << tablica[i] << " ";
    }
    return 0;
}