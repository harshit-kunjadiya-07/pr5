/*
	author : harshit
	doc : 9/07/26
	object : pr5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,size;
	int arr[100];
	clrscr();
	printf("enter the array size : ");
	scanf("%d",&size);

	printf("enter array element : ");

	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Negative element are : ");

	for(i=0;i<size;i++){
		if(arr[i]<0)
		{
			printf("%d",arr[i]);
		}
	}
	getch();

}