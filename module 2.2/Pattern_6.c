#include<stdio.h>
main()
{
	int i,j;
	char ch=65;
	for(i=1;i<=5;i++)
	{ 
	    ch=65;
		for(j=1;j<=i;j++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
	}
}
