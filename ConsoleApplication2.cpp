

#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, a, b, c;
    cout << "Введіть тризначне число:"<<endl;
	cin >> n;
	a = n / 100;
	c = n % 10;
	b = (n/10)%10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));

	c = n % 10;
	b = (n / 10) % 10;
	b = (n % 100) / 10;
	cout << boolalpha << ((b > c) && (a > b) || (b < c) && (a < b));


	/*((b > c) && (a > b) || (b < c) && (a < b)) ? (cout << "спадаюча або зростаюча") : (cout << "не є прогресією");*/


}


