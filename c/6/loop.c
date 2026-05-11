#include<stdio.h>
int loop(int n)//如果满足返回1，else返回0； 
{
	int	result=0;
	do{
		result=result*10+n%10;
		n=n/10;
	}while(n>0);
	return result;			 
}
void main()
{
	int m,n,i;
	scanf ("%d%d",&m,&n);
	for (i = m;i <= n;i++){
		if (loop(i)==i)	
			printf ("%d\n",i);
	}	
}
