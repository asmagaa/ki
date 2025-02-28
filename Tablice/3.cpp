#include <iostream>
using namespace std;

int main() {
    int tablica[4] = {10, 20, 5, 15};
    int max = tablica[0];
    for (int i = 1; i < 4; ++i) {
        if (tablica[i] > max) {
            max = tablica[i];
        }
    }
    cout << "Najwiekszy element tablicy to: " << max << endl;
    return 0;
}