#include<stdio.h>

int main()
{	
	int sum,n;
	sum=0; n=0;
	do
	{	n++;
		sum+=n;
		//printf("%d %d\n",n,sum);
	}
	while(n<1000);
	printf("sum=%d\n",sum);
	return 0;
}
