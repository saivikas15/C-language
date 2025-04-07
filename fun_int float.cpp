#include<stdio.h>
main()
{
int x;
float y;
printf("enter x,y");
scanf("%d %f",&x,&y);
float z = sum(x,y);
printf("%f",sum(3,2.5));
}
float sum(int a, float b);
{
	float c;
	c=a+b;
	return c;
}
