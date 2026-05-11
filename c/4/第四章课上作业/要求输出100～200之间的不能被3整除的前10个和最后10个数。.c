#include<stdio.h>

int main()
{	
	int i,n,t,x,j;
	n=100;
	for(i=100;i<201;i++)
	{	t=n%3;
		j=2*100/3;
		if(t!=0)
		{
			x++;
			//printf("%d  ",x);
			if(x<=10 || x>j-9)
				printf("%d  ",n);  
		}
		n++; 
	}
	return 0;
}
