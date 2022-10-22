#include <iostream>
using namespace std;
int a, b, c, x, y;
int main() {
    cout << "Enter a number:";
    cin >> a;
    cout << "Enter a next number:";
    cin >> b;
    if (b<=a) {
        cout << "kolejna liczba nie jest większa od poprzedniej";
        return 0;
    }
    cout << "Enter a next number:";
    cin >> c;
    if (c<=b) {
        cout << "kolejna liczba nie jest większa od poprzedniej";
        return 0;
    }
    cout << "Enter a next number:";
    cin >> x;
    if (x<=c) {
        cout << "kolejna liczba nie jest większa od poprzedniej";
        return 0;
    }
    cout << "Enter a next number:";
    cin >> y;
    if (y<=x) {
        cout << "kolejna liczba nie jest większa od poprzedniej";
        return 0;
    }
    else {
        cout << "Success";
    }
    return 0;
}