#include<stdio.h>
int main()
{	int max,min,i,n,t;

	scanf("%d",&n);
	scanf("%d",&t);
	max=t; min=t;

	for(i=1;i<n;i++)
	{
		scanf("%d",&t);
		if(t>max) max=t;
		if(t<min) min=t;
	}
	printf("%d %d\n",max,min);
	return 0;
}
