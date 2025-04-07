#include<stdio.h>
float sum(int,float);
main()
{
int x;
float y;
printf("enter x,y");
scanf("%d %f",&x,&y);
float z = sum(x,y);
printf("%f",z);
}
float sum(int a, float b)
{
	float c;
	c=a+b;
	return c;
}
