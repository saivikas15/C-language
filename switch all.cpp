#include<stdio.h>
int main()
{
	int a,b,n,i,count=0,fact=1;
	printf("enter a");
	scanf("%d",&a);
	printf("enter choice");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
				if(a%2==0) 
				printf("even");
				else
				printf("odd");
				break;   
		case 2:
			{
				for(i=1;i<=a;i++)
				{
					if(a%i==0)
					count++;
				}
				if(count==2)
			printf("prime no");
			else
			printf("not a prime");
			break;
			
		case 3:
			{
				for(i=1;i<=a;i++)
				fact=fact*i;
				printf("%d",fact);
				break;
			}
		case 4:
			{
				if(a>0)
				printf("positive no");
				else 
				printf("negative no");
			}

	}
}
}
