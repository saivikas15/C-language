#include<stdio.h>
main()
{
	int a[100],i,n,greatest,smallest;
	printf("enter no. of elements\t");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	greatest=a[0];
	smallest=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>greatest)
		greatest=a[i];
		{
			if(a[i]<smallest)
			smallest=a[i];
		}
	}
	printf("greatest is %d\n",greatest);
	printf("smallest is %d\n",smallest);
}
