#include<stdio.h>
main()
{
	int n=1551,r,sum=0;
	int temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	n=temp;
	if(n==sum)
	printf("palindrome");
	else 
	printf("not a palindrome");
}
