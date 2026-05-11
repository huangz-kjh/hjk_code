#include<stdio.h>
int main()
{	int x,i;
	printf("Enter :");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{	if(x%i==0)
		{	printf("no");
			break;
		}
	}	
	if(i>=x)
		printf("yes");
	/*else
		printf("no");*/
	return 0;
}
