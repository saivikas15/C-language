#include<stdio.h>
main()
{
	int x=18,y;
	y=x++;
	printf("%d  %d\n",x,y);
	y=--x;
	printf("%d  %d\n",x,y);
    y=++x;
    printf("%d  %d\n",x,y);
    y=x--;
    printf("%d  %d\n",x,y);

}
