#include<stdio.h>

int main()
{	int m,n,t,i,w,n1,n2,n3;
	
	//scanf("%d%d",&m,&n);
	m=100;
	n=400;
	if(m>=1 && n<=1000 && n>m)
	{	
		for(i=m,t=m;i<=n;i++)
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
			{	n1=t%100;
				n2=(t/10)%10;
				n3=t/100;
			}
			else;
			
			w=(n1*n1*n1+n2*n2*n2+n3*n3*n3);
			if(w==t)
			printf("%d\n",t);
			else;
			t++;	
		}
	}
	else
		printf("Error\n");
	return 0;
}
