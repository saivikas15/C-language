#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("enter n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("prime no");
	else 
	printf("not a prime no");

	}
