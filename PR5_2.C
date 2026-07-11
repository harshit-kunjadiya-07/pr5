/*
	author : harshit
	doc : 9/07/26
	object : pr5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int row,col,i,j,arr[100][100],large;
	clrscr();
	printf("enter row : ");
	scanf("%d",&row);

	printf("enter col : ");
	scanf("%d",&col);

	printf("enter array element : ");

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	large = arr[0][0];

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]>large)
			{
				large = arr[i][j];
			}
		}
	}

	printf("\nthe largest element is : %d",large);

	getch();
}


