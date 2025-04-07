#include<stdio.h>
int reversed_integer(int n)
{
int reverse=0;
while(n!=0)
	{
		int	a=n%10;
	    reverse=reverse*10+a;
	    n=n/10;
	}
return reverse;
}
int main()
{
	int n;
	printf("enter number ");
	scanf("%d",&n);
	printf("reversed no.= %d\n",reversed_integer(n));
	return 0;
	}
