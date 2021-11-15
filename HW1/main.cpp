//Задание 1
#include<iostream>
#include<cmath>


int main()
{
	using namespace std;

	setlocale(0, "RU");


	double pi = 3.14;
	double L;
	cout << "Введите значение числа L: ";
	cin >> L;

	double R = L / (2 * pi);
	cout << "R = " << R << endl;
	double S = pi / pow(R, 2);
	cout << "S = " << S << endl;

	return 0;

}
