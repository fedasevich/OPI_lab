// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, v0, v, t;
	
/*	cout << "Введіть  швидкість V:" << endl;
	cin >> v;
	cout << "Введіть початкову швидкість V0:" << endl;
	cin >> v0;
	cout << "Введіть прискорення а:" << endl;
	cin >> a;
	t = (v - v0) / a;
    cout << "t = (v - v0)/a = " << t << endl;
*/

	printf("Введіть швидкість V : ");
	scanf_s("%lf", &v);
	printf("Введіть початкову швидкість V0 : ");
	scanf_s("%lf", &v0);
	printf("Введіть початкову швидкість a : ");
	scanf_s("%lf", &a);
	t = (v - v0)/a;
	printf("t = (v - v0)/a = %lf", t);
}


