// Lab_02.cpp
// Назарко Захар 
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 18


#include <iostream>

using namespace std;


int main()
{
	double a;
	//double z1;
	double z2;

	cout << "a = "; cin >> a;

	//z1 = ((((a + 2) / sqrt(a * 2)) - (a / (sqrt(a * 2) + 2)) + (2 / (a - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2)));
	z2 = 1 / (sqrt(a) + sqrt(2));

	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
