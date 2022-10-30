#include<stdio.h>
#include<locale.h>
#include<math.h>
#define _USE_MATH_DEFINES
double name (double res1, double res2)
{
	double result = res1 / res2;
	return result;
}
int main()
{
	double x, y, a, res1, res2, result1;
	a = 7.1e-9;
	setlocale(LC_ALL, "RUS");
	puts("введите x");
	scanf("%lf", &x);
	puts("введите y");
	scanf("%lf", &y);
	res1 = cos(pow(x, 3) + 6) - sin(y - a);
	res2 = log(pow(x, 4)) - 2 * pow(sin(x), 5);
	result1 = name(res1, res2);
	printf("Значение F=%lf", result1);
	return 0;
}
