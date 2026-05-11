#include<stdio.h>
int main()
{	int i,sum,t,a,n;
//printf("Enter :\n");
	scanf("%d",&n);

	sum=0; t=1; a=1;
	for(i=1;i<=n;i++)
	{	sum+=t;
		a++;
		t=10*t+a;
	}
	printf("%d\n",sum);
	return 0;

}
