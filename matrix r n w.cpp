#include<stdio.h>
#define R 2
#define C 3
main()
{
	int a[R][C],i,j;
	printf("enter matrix");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&a[i][j]);
	printf("the matrix %d*%d is \n",R,C);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
