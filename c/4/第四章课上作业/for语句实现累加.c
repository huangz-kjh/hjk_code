#include<stdio.h>

int main()
{	
	int i;
	double sum,n;
	sum=0; n=0;
	for(i=0;i<100;i++)
	{	n++;
		sum+=1.0/n;
		//printf("%d %d\n",n,sum);
	}
	printf("sum=%.4lf\n",sum);
	return 0;
}
