#include<stdio.h>
int main()
{
	int a,b,answer;
	
	int max(int x,int y);
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter a:");
	scanf("%d",&b);
	
	answer=max(a,b);
	
	printf("max=%d",answer);
	
	return 0;
}

	int max(int x,int y)
	{
		int z;
		if(x>y) 
			z=x;
		else
			z=y;
		
		return(z);
		
	}
