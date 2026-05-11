//全部知识产权，哈哈哈 
#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,k,x,flag;
	int n,m;
	
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);		//输入数组 
			
	for(i=0;i<n;i++) 
		for(j=0;j<m;j++)	//搜寻数 
		{	
			flag=0;			 
			for(x=0;x<m;x++)			
				if(a[i][j]<a[i][x])	break;
					if(x>=m)
					{
						for(k=0;k<n;k++)					
							if(a[i][j]<a[k][j])	break;		 							
								if(k>=n)
									flag=1;	
					}						 																															
			if(flag==1)
				printf("%d %d %d\n",a[i][j],i+1,j+1);
		}
	return 0;
}


