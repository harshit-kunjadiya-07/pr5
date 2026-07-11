/*
	author : harshit
	doc : 9/07/26
	object : pr5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],row,col,i,j;
	clrscr();
	printf("Enter row size: ");
	scanf("%d", &row);

	printf("Enter column size: ");
	scanf("%d", &col);

	printf("\nEnter array elements:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
	{
		printf("a[%d][%d] = ", i, j);
		scanf("%d", &a[i][j]);
	}
	}

	printf("\nThe Matrix:\n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
	{
		printf("%d ", a[i][j]);
	}
		printf("\n");
	}

	printf("\nThe Transpose Matrix:\n");

	for(i = 0; i < col; i++)
	{
		for(j = 0; j < row; j++)
	{
		printf("%d ", a[j][i]);
	}
		printf("\n");
	}

	getch();
}