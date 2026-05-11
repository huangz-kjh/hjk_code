#include<stdio.h>
int main()
{	int i,j;
	for(j=1;j<=200;j++)
	{	
		for(i=2;i<j;i++)
		{	
			if(j%i==0)
				break;
		}
		if(i>=j) 
			printf("%d\n",j);
	}	
	return 0;
}
