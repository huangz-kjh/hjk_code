#include<stdio.h>
int main()
{	
	int r,n,i,x;
	int sum_ge(int x);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%d",&x);
		r=sum_ge(x);
		printf("%d ",r);
	}
	return 0;
}
int sum_ge(int x)
{
	int r=0,ge;
	do{
		ge=x%10;
		r+=ge;
		x=x/10;
	}while(x!=0);
	return r;
}



