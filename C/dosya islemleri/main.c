#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// textden okuma, sayi s�f�rlama kullan�c�dan iste
int main()
{
	double sum = 0;
	int size, i, row, column, k, m, a, b;
	double **arr;
	printf("row:");
	scanf("%d", &row);
	printf("column:");
	scanf("%d", &column);
	printf("Enter the interval that you want to delete\n");
	printf("initial interval point:");
	scanf("%d", &a);
	printf("end of interval:");
	scanf("%d", &b);

	arr = (double **)malloc(sizeof(double *) * row);
	for (i = 0; i < row; i++)
		arr[i] = (double *)malloc(sizeof(double) * column);

	printf("\nEnter the elements\n");

	for (i = 0; i < row; i++)
	{
		for (k = 0; k < column; k++)
			scanf("%lf", &(arr[i][k]));
	}

	printf("\nFilled matrix\n");
	for (i = 0; i < row; i++)
	{
		for (k = 0; k < column; k++)
			printf("%  .2lf   ", arr[i][k]);
		printf("\n");
	}

	printf("column sum vector:\n\n");

	for (k = 0; k < column; k++)
	{
		for (i = 0; i < row; i++)
		{
			sum = sum + arr[i][k];
		}
		printf("%.2lf\t", sum);
		sum = 0;
	}

	printf("\nrow sum vector:\n\n");

	for (i = 0; i < row; i++)
	{
		for (k = 0; k < column; k++)
		{
			sum = sum + arr[i][k];
		}
		printf("%.2lf\t", sum);
		printf("\n");
		sum = 0;
	}

	printf("\nson\n\n");

	for (i = 0; i < row; i++)
	{
		for (k = 0; k < column; k++)
		{
			if ((arr[i][k] > a) && (arr[i][k] < b))
			{
				arr[i][k] = 0;
			}
		}
	}

	for (i = 0; i < row; i++)
	{
		for (k = 0; k < column; k++)
			printf("%  .2lf   ", arr[i][k]);
		printf("\n");
	}
	//************************
	printf("\n\n");
	i = 0;
	FILE *dosya;
	double notlar[5][3];
	dosya = fopen("kayit.txt", "r");
	if (dosya != NULL)
	{
		while (!feof(dosya))
		{
			fscanf(dosya, "%s", &notlar);
			printf("%s   ", notlar);
			i++;
			if (i == 5)
			{
				printf("\n");
				i = 0;
			}
		}
	}

	else
		printf("Dosya bulunamad�");

	return 0;
}
