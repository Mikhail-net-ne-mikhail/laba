#include <iostream> 
#include <stdio.h> 
#include<math.h> 
#include <clocale> 
int main() 
{
	int a, b, h,x;
	double y;
	setlocale(0, "rus");
	printf("Введите число а\n");
	scanf_s("%d", &a);
	printf("Введите число h\n");
	scanf_s("%d", &h);
	printf("Введите число b\n");
	scanf_s("%d", &b);
	x = a * h * b;
	y = pow(x,2) + sin(x) + 3*sqrt(cos(x) * 2 * x) / (1.5 * log(x));  
	printf("Y=%.1f\n", y);  
	return 0;
}

