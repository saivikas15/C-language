#include<stdio.h>
main()
{
	int n,t,i=1;
	printf("enter n ");
	scanf("%d",&n);
	while(i<=10)
	{
		t=n*i;
		printf("%d * %d = %d \n",n,i,t);
		i++;
	}
}
