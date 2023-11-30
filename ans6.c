//write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	switch(n>0)
	{
		case 1: printf("Positive");break;
		case 0: switch(n==0)
		{
			case 1:printf("zero");break;
			case 0:printf("negative");break;
		}

	}
}