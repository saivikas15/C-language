#include<stdio.h>
#define R 3
#define C 3
void mul(int a[][C], int b[][C]);
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
	mul(m1,m2);

}

void mul (int a[][C], int b[][C])
{
	int i,j,k,c[R][C];
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=0;
			for(k=0;k<C;k++)
			c[i][j]+=a[i][k]*b[k][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
