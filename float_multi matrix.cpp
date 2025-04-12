#include<stdio.h>
main()
{
	float a[50][50],b[50][50],c[50][50];
	int R1,C1,R2,C2;
	int i,j,k;
	printf("enter rows and columns for matrix1 \n");
	scanf("%d%d",&R1,&C1);

	printf("enter rows and columns for matrix2\n");
	scanf("%d%d",&R2,&C2);
	
	printf("enter elements in matrix 1\n");
	for(i=0;i<R1;i++)
	for(j=0;j<C1;j++)
	scanf("%f",&a[i][j]);
	
	printf("enter elements in matrix 2\n");
	for(i=0;i<R2;i++)
	for(j=0;j<C2;j++)
	scanf("%f",&b[i][j]);
	
	if(C1==R2)
	{
	printf("matrix multiplication is possible\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			c[i][j]=0;
			for(k=0;k<C1;k++)
			{			
				c[i][j]+=a[i][k]*b[k][j];
			}
				printf("%f\t",c[i][j]);
			}
			 printf("\n");		
		
	}
}
else
printf("multiplication is not possible");
}

