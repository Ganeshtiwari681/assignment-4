//WAP to create simple calculator using switch case.
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	char ch;
	printf("enter the two number");
	scanf("%f%f",&a,&b);
	fflush(stdin);
	printf("\nenter the operator");
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':
					printf("\na+b =%.2f",a+b);break;
		case'-':			
					printf("a-b =%.2f",a-b);break;
		case'*'	:		
					printf("a*b =%.2f",a*b);break;
		case'/'	:		
					printf("a/b =%.2f",a/b);break;
		default: printf("invalid operator");
	}
}