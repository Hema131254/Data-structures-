#include<stdio.h>
int main()
{
	int c,n;
	printf("enter the n value");
	scanf("%d",&n);
	c=n%2;
	if(c==0)
	{
		printf("it is an even number");
	}
	else
	{
		printf("it is an odd number");
	}
	return 0;
}
