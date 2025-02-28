#include <iostream>
using namespace std;

int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    int a, b, c;
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    cout << "Najmniejsza liczba to: " << minimum(a, b, c) << endl;
    return 0;
}