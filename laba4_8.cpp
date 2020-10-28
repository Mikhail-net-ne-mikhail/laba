#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
void shellSort(int* num, int size)
{
	int increment = 3;
	while (increment > 0)
	{
		for (int i = 0; i < size; i++)
		{
			int j = i;
			int temp = num[i];

			while ((j >= increment) && (num[j - increment] > temp))
			{
				num[j] = num[j - increment];
				j = j - increment;
			}
			num[j] = temp;
		}
		if (increment > 1)
			increment = increment / 2;
		else if (increment == 1)
			break;
	}
}
int main()
{
	int m[10];

	for (int i = 0; i < 10; i++)
	{
		printf("m[%d]=", i);
		scanf("%d", &m[i]);
	}
	shellSort(m, 10);
	for (int i = 0; i < 10; i++)
		printf("%.2d ", m[i]);
	getchar(); getchar();
	return 0;
}