#include <stdio.h> 
#include<clocale>
int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, m;
	int i = 0;

	printf("Введите число n\n");
	scanf_s("%d", &n);
	printf("Введите количество цилов k\n");
	scanf_s("%d", &k);



	do
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			i++;
		}
		else
		{
			n = n * 3 + 1;
			i++;
		}
	} while (n > 1);
	if (k < i)
	{

		printf("i=%d\n", i);
		printf("n=%d\n", n);
	}
	else
	{
		printf("Условие 1<k<n не выполнено\n");
	}

	return 0;   
}