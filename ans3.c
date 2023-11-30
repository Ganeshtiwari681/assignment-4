//wap in C to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
void main()
{
	char al;
	scanf("%c",&al);
	switch(al)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("vowel");break;
		default :printf("consonant");
	}
}