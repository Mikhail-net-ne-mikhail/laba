#include <iostream> 
#include<clocale>
int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, m;
	printf("Введите число n\n");
	scanf_s("%d", &n);
	
	do
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = n * 3 + 1;
		}
	} while (n > 1);
	
	printf("n=%d\n", n);

	return 0;
}
