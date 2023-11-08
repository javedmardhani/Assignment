#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n Enter Value 1 :- ");
	scanf("%d",&a);
	printf("\n Enter Value 2 :- ");
	scanf("%d",&b);
	
	c=a+b;
	printf("\n Addition      :- %d",c);
	c=a-b;
	printf("\n Subtraction   :- %d",c);
	c=a*b;
	printf("\n Multipliction :- %d",c);
	c=a/b;
	printf("\n Divsion       :- %d",c);
	c=a%b;
	printf("\n Modulo        :- %d",c);
}

