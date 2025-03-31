#include<stdio.h>
main()
{
	int x;
	printf("enter the marks: ");
	scanf("%d",&x);
	if(x>=500)
	printf("grade A");
	{
		if(x>=400 && x<500)
		printf("grade B");
		{
			if(x>=300 && x<400)
			printf("grade C");
			{
				if(x<300)
				printf("fail");
				
			}
		}
	
	}
}
