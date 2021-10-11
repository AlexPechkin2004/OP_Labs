#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	float x, e;
	float shx = 0;
	int counter = 1;

	cout << "Варіант 24. Обчислення значення функції Shx із заданою точністю e\n\n";
	cout << "Введіть значення x: ";
	cin >> x;
	cout << "Введіть значення e: ";
	cin >> e;
	shx = 0;
	cout << "\n0";

	int factorial = 1;
	while (((pow(x, counter)) / (tgamma(counter + 1))) >= e) {
		shx = shx + (pow(x, counter) / (tgamma(counter + 1)));
		cout << "\n";
		cout << shx;
		counter = counter + 2;
	}

	cout << "\n\nОстаннє число в цьому списку є шуканим значенням функції Shx із заданою точністю e";
}
