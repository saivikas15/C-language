#include<stdio.h>
float sum();
int sub();
float mul();
main()
{
	printf("sum is %f\n",sum());
	printf("sub is %d\n",sub());
	printf("mul is %f\n",mul());
}
float sum()
{
	int x;
	float y;
	printf("enter int, float ");
	scanf("%d%f",&x,&y);
	return x+y;
}
int sub()
{
	int x,y;
	printf("enter 2 integers ");
	scanf("%d%d",&x,&y);
	return x-y;
}
float mul()
{
	int x;
	float y;
	printf("enter int and float ");
	scanf("%d%f",&x,&y);
	return x*y;
}

