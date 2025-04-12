#include<stdio.h>
#define R 3
#define C 2
void add(int a[][C], int b[][C]);
void sub(int a[][C], int b[][C]);
main()
{
	int m1[R][C],m2[R][C],i,j;
	printf("enter matrix1\n");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&m1[i][j]);
	printf("enter matrix2\n");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&m2[i][j]);
	add(m1,m2);
	sub(m1,m2);

}

void add (int a[][C], int b[][C])
{
	int i,j,c[R][C];
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void sub(int a[][C],int b[][C])
{
	int i,j,c[R][C];
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
