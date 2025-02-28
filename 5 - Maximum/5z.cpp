#include <iostream>
using namespace std;

int maximum(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    int a, b, c;
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    cout << "Najwieksza liczba to: " << maximum(a, b, c) << endl;
    return 0;
}