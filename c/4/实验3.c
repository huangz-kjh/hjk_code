#include<stdio.h>
int main()
{	int i,n,a;
	double sum,t;
	
	scanf("%d",&n);
	for(sum=0.0,t=1.0,i=1,a=0;i<=n;i++)
	{	a++;
		t*=a;
		sum+=1/t;
	}
	printf("%.10lf",sum+1);
	return 0;
}
