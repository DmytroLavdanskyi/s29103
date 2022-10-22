#include <iostream>
#include <cmath>
using namespace std;

int a, b, c, d, x1, x2;

int main() {
    cout << "ax^2 + bx + c =0 \n Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;

    d = ((b * b) - 4 * a * c);
    x1 = ((-b + pow(d, -1))/(2 * a));
    x2 = ((-b - pow(d, -1))/(2 * a));
    
if (d > 0) {
    cout << x1 << endl;
    cout << x2;  
return 0;
}
if (d == 0) {
    cout << (-b / (2 * a));
    return 0;
}
if (d < 0) {
    cout << "D < 0 \n ERROR";
    return 0;
}
}