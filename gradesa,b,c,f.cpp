#include<stdio.h>
main()
{
	int x;
	printf("enter marks ");
	scanf("%d ",&x);

	if(x>=500)
	{
	printf("grade a");
	}
	if(x>=400 && x<500)
	{
	printf("grade b");
	}
    if(x>=300 && x<400)
	{
	printf("grade c");
	}

	else 
	printf("fail");
}
