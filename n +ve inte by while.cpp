#include<stdio.h>
main()
{
	int i=0,n,a,sum=0;
	printf("enter n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter number ");
		scanf("%d",&a);
		if(a<0)
		{
			printf("%u enter -ve ");
			continue;
		}
		sum=sum+a;
		i++;
	}
	float f=(float)sum/n;
	printf("%f",f);
}
	
	
	
