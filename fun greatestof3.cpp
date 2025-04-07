#include<stdio.h>
int greatest_of_three(int a, int b,int c)
{
	if(a>b && a>c)
	return 'a';
	else if(b>c)
	return 'b';
	else
	return 'c';
}
int main()
{
	int a,b,c;
	printf("enter 3 values ");
	scanf("%d%d%d",&a,&b,&c);
	printf("the greatest value is %c ",greatest_of_three(a,b,c));
	return 0;
}
