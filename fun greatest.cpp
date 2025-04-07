#include<stdio.h>
int greatest(int a,int b)
{
	return a>b ? a:b;
}
main()
{
	int a=70, b=523;
	printf("%d",greatest(a,b));
}
