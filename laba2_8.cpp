#include <iostream> 
#include <stdio.h> 
#include<math.h> 
#include <clocale> 
int main()
{
	int a, b, h, x;
	double y,y2,y1;
	setlocale(0, "rus");
	printf("¬ведите число а\n");
	scanf_s("%d", &a);
	printf("¬ведите число h\n");
	scanf_s("%d", &h);
	printf("¬ведите число b\n");
	scanf_s("%d", &b);
	x = a * h * b;
	y1 = pow(x, 2) + sin(x) + 3 * sqrt(cos(x) * 2 * x);
	y2 = 1.5 * log(x);
	y = y1 / y2;
	printf("Y=%.1f\n", y);
	return 0;
}