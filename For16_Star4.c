#include<stdio.h>
main()
{
	int i,n,j;
	printf("\n\t Enter Number =");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		printf("\n\t");
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
	}
}
