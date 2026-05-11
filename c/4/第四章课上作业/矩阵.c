#include<stdio.h>

int main()
{	
	int i,j,x;
	for(i=1;i<=4;i++)
	{	
		//x=5*i;
		for(j=i;;j+=i)
		{
			if(j>5*i) break;
			printf("%-8d",j);
			//printf("%-4d",x);
			//j+=i;
		}
		printf("\n");
	}
	return 0;
}
