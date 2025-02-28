#include <iostream>
using namespace std;

void minimum(int a, int b, int c, int &min) {
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
}

int main() {
    int a, b, c, min;
    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    minimum(a, b, c, min);
    cout << "Najmniejsza liczba to: " << min << endl;
    return 0;
}