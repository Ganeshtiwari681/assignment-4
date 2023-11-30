//WAP in C to find maximum between two number using switch.
#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	switch(a>b)
	{
		case 0: printf("%d is greater the %d",b,a);break;
		case 1: printf("%d is greater the %d",a,b);break;
		
	}
}