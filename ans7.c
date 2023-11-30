//write the program in C to find roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,r1,r2,d;
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b-4*a*c);
	int i=sqrt(-d);
	switch(d>0)
  {
  	case 1: r1=(-b-sqrt(d))/2*a;
  	        r2=(-b+sqrt(d))/2*a;
  	        printf("r1=%f \nr2=%f",r1,r2);break;
  	case 0:
  		{
  			switch(d<0)
  			{
  				case 1: r1=(-b-i)/2*a;
  	                    r2=(-b+i)/2*a;
  	                     printf("r1=%f \nr2=%f",r1,r2);break;
  	            case 0:r1=r2=-b/2*a;
  	                     printf("r1=%f \nr2=%f",r1,r2);break;
			}
		}
  }
} 