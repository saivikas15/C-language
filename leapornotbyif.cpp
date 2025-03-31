#include<stdio.h>
main()
{
	int x;
	printf("enter year  ");
	scanf("%d",&x);
	if((x%4==0 && x%100!=0) || (x%400==0))
	{
	printf("%d is leap year",x);
    } 
	  else 
        printf("not a leap year",x);
    }
