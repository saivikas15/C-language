#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter number ");
	scanf("%d",&n);
	int temp=n;
	for(;n!=0;n/=10)
	{
		r=n%10;
		sum=sum*10+r;
	}
	if(n==sum)
	printf("palindrome");
	else 
	printf("not a palindrome");
}
