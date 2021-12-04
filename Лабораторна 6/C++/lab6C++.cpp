#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void inputValues(int& n, float& x, float& e);
int factorial(int n);
float sum(int n, float x, float e);

int main()
{
	int n;
	float x;
	float e;
	cout << "Обчислити з точністю e значення виразу:\n\n";
	inputValues(n, x, e);
	cout << "\n\nВідповідь: " + (to_string(sum(n, x, e)));
}

void inputValues(int& n, float& x, float& e)
{
	cout << "Введіть значення цілого числа n: ";
	cin >> n;
	cout << "Введіть значення дійсного числа x: ";
	cin >> x;
	cout << "Введіть значення точності e: ";
	cin >> e;
}

int factorial(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}

float sum(int n, float x, float e)
{
	int k = 0;
	float sum = 0;
	while (fabs(pow((-1), k) / ((factorial(k)) * (factorial(n + k)))) * (pow((x / 2), (2 * k + n))) >= e)
	{
		sum = sum + (pow((-1), k) / ((factorial(k)) * (factorial(n + k)))) * (pow((x / 2), (2 * k + n)));
		k++;
	}
	return sum;
}