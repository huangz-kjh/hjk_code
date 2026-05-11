#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,index,k,flag;
	int n,m;
	
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	//找到行最大点		
	for(i=0;i<n;i++){
		index=0;		
		for(j=0;j<m;j++)
			if(a[i][index]<a[i][j]) index=j;		// 找到行最大	
								
			flag=0;
			for(k=0;k<n;k++)					
				if(a[i][index]<a[k][index])			 //确认行最大是列最大
					flag=1;
			if(flag==0)
				printf("%d %d %d\n",a[i][index],i+1,index+1);
	}
	return 0;
}



