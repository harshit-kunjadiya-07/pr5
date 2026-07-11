/*
	author : harshit
	doc : 9/07/26
	object : pr5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int row, col, i, j, arr[100][100],r,c,sum=0;
	clrscr();
	printf("Enter row size : ");
	scanf("%d", &row);

	printf("Enter column size : ");
	scanf("%d", &col);

	printf("Enter array elements:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("array[%d][%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nEnter row number: ");
	scanf("%d", &r);

	printf("Elements of row %d: ", r);

	sum = 0;

	for(j = 0; j < col; j++)
	{
		printf("%d ", arr[r][j]);
		sum += arr[r][j];
	}

	printf("\nThe sum of row %d: %d\n", r, sum);

	printf("\nEnter column number: ");
	scanf("%d", &c);

	printf("Elements of column %d: ", c);

	sum = 0;

	for(i = 0; i < row; i++)
	{
		printf("%d ", arr[i][c]);
		sum += arr[i][c];
	}

	printf("\nThe sum of column %d: %d", c, sum);

	getch();
}