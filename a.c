#include<stdio.h>
main()
{
	int a[25],n,i,j,t;
	printf("enter a no.");
	scanf("%d",&n);
	printf("enter an array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("sorted array\n:");
	for(i=0;i<n;i++)
	printf("%d",a[n-1]);
}