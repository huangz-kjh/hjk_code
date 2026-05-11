#include<stdio.h>

int main()
{	int m,n,t,i,w,n1,n2,n3;
	
	printf("Input m: ");
	scanf("%d",&m);
	printf("Input n:\n");
	scanf("%d",&n);
	if(m>=1 && n<=1000 && n>=m)
	{	
		
		for(t=m,i=m;i<=n;i++)
		{	
			if(t>=1 && t<=9)
			{n1=t;
			n2=0;
			n3=0;
			}
			else if(t>=10 && t<=99)
			{	n1=t%10;
				n2=t/10;
				n3=0;
			}
			else if(t>=100 && t<=999)
			{	n1=t%10;
				n2=(t/10)%10;
				n3=t/100;
			}
			else
				printf("Error\n");
			
			w=n1*n1*n1+n2*n2*n2+n3*n3*n3;
			
			if(t==w)
			printf("%d\n",t);
			else;
			t++;	
		}
	}
	else
		printf("Error\n");
	return 0;
}

