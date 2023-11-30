//WAP to print day of week name using switch case.
#include<stdio.h>
int main()
{ 
	int days;
	scanf("%d",&days);
	switch(days)
	{
		case 1: printf("Sunday");break;
		case 2: printf("\nMonday");break;
		case 3: printf("\nTuesday");break;
		case 4: printf("\nWednesday");break;
		case 5: printf("\nThursday");break;
		case 6: printf("\nFriday");break;
		case 7: printf("\nSaturday");break;
	}
}