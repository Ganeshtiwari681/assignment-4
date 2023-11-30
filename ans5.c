//write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	
	switch(n%2==0)
	{
		case 0: printf("Odd");break;
		case 1: printf("Even");break;		
	}	
} 