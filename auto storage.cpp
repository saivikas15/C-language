#include<stdio.h>
main()
{
	auto int x=100;
	{
		auto int x=300;
		printf("%d\t",x);
	}
	printf("%d",x);

}
