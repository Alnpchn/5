#include<stdio.h>#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<conio.h>
#define M_PI 3.14159265358979323846
#define t 0.3
double otvet(double x)
{
	double a = log10(fabs(t * x + pow(t, 2)));
	double b = t * pow(x, 2) + sqrt(x);
	double y = log(pow(a, 2) / a + b);
	return y;
}
void main(void)
{
	float gr1, gr2, gr3;
	setlocale(LC_ALL, "RUS");
	puts("Задание 1");
	puts("Введите градус");
	scanf_s(" %f %f %f", &gr1, &gr2, &gr3);
	printf("%.1f градусов равно %.6f\n", gr1, gr1 * M_PI / 180);
	printf("%.1f градусов равно %.6f\n", gr2, gr2 * M_PI / 180);
	printf("%.1f градусов равно %.6f\n", gr2, gr2 * M_PI / 180);

	puts("Задание 2");
	double a, b, x, y;
	scanf_s("%lf", &x);
	y = otvet(x);
	printf("y=%lf", y);
}
