#include <stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	if (n%i==0)
	{
		count++;
		
	}
	}
	if (count==2)
	{
		printf("%d is prime",n);
	}
	else if (n<=1)
	{
		printf("%d is not prime nor composite",n);
	}
	else
	{
		printf("%d is composite",n);
	}

}
