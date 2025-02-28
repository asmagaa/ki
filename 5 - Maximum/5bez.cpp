#include <iostream>
using namespace std;

void maximum(int a, int b, int c, int &max) {
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
}

int main() {
    int a, b, c, max;
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    maximum(a, b, c, max);
    cout << "Najwieksza liczba to: " << max << endl;
    return 0;
}