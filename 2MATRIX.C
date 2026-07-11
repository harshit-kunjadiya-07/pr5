#include<stdio.h>
#include<conio.h>

void main()
{

	int a[10][10], b[10][10], sum[10][10],i,j,col,row;
	clrscr();

	printf("Enter Row Size : ");
	scanf("%d", &row);

	printf("Enter Column Size : ");
	scanf("%d", &col);

	printf("\nEnter First Matrix Elements:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter Second Matrix Elements:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("b[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	// Sum of Matrices
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nFirst Matrix:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	printf("\nSecond Matrix:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}

	printf("\nSum of Two Matrices:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%4d", sum[i][j]);
		}
		printf("\n");
	}

	getch();
}