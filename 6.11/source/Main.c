#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ok;
	srand(0);
	ok = rand();
	int *num = (int *)malloc(sizeof(int)*ok);
	int i, j,temp,a=0;
	for (i = 0; i < ok; i++)
	{
		num[i] = rand();
	}
	for (i = 0; i < ok; i++)
	{
		for (j = 0;  j < ok-1; j++)
		{
			if (num[j] < num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	} 
	for (i = 0; i < ok; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	system("pause");
}