#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, m;

	printf("������� ����� n\n");
	scanf_s("%d", &n);

	//	printf("������� ����� k\n");
	//	scanf_s("%d", &k);

	//	printf("������� ����� m\n");
	//	scanf_s("%d", &m);

		//do
		//{

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
	//} while (1 < k < n);


	printf("n=%d\n", n);

	return 0;
}