#include <iostream>
using namespace std;
#include "windows.h"
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, x, b, c;
    double f;
    cout << "������ �:" << endl;
    cin >> a;
    cout << "������ x:" << endl;
    cin >> x;
    cout << "������ b:" << endl;
    cin >> b;
    cout << "������ c:" << endl;
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
    cout << "������ ������: " << endl;
    cin >> symbol;
    switch (symbol) {
    case '.':cout << "������" << '\n'; break;
    case ',':cout << "����" << '\n'; break;
    case '!':cout << "���� ������" << '\n'; break;
    case ';':cout << "������ � �����" << '\n'; break;
    case ':':cout << "���������" << '\n'; break;
    }*/
    return 0;
}
