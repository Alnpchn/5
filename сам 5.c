#include<stdio.h>
#include<locale.h>
#include<math.h>
#define _USE_MATH_DEFINES
double name( double x, double y)
{
	double result, res1, res2;
	 
	 res1 = cos(pow(x, 3) + 6) - sin(y - (7.1 * pow(10, -9)));
	 res2 = log(pow(x, 4)) - 2 * pow(sin(x), 5);
	result = res1 / res2;
	return result;
}
void main()
{
	double x, y, res1, res2, result1;
	setlocale(LC_ALL, "RUS");
	puts("введите x");
	scanf("%lf", &x);
	puts("введите y");
	scanf("%lf", &y);
	
	result1 = name( x, y);
	printf("Значение F=%lf", result1);
}
