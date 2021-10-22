#include <iostream>
using namespace std;
#include "windows.h"
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, x, b, c;
    double f;
    cout << "¬вед≥ть а:" << endl;
    cin >> a;
    cout << "¬вед≥ть x:" << endl;
    cin >> x;
    cout << "¬вед≥ть b:" << endl;
    cin >> b;
    cout << "¬вед≥ть c:" << endl;
    cin >> c;
    if (x + 5 < 0 && c == 0) {
        f = ((1) / a * x) - b;
        cout  << f << endl;
    }
    else if (x > 1 && c != 0) {
        f=(x - a) / (x - c) * (x - c);
        cout  << f << endl;
    }
    else {
        f = (10 * x) / c - 4;
        cout << f << endl;
    }
   /* char symbol;
    cout << "¬вед≥ть символ: " << endl;
    cin >> symbol;
    switch (symbol) {
    case '.':cout << "крапка" << '\n'; break;
    case ',':cout << "кома" << '\n'; break;
    case '!':cout << "знак оклику" << '\n'; break;
    case ';':cout << "крапка з комою" << '\n'; break;
    case ':':cout << "двокрапка" << '\n'; break;
    }*/
    return 0;
}
