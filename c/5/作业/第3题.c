#include<stdio.h> 
int main(){
	int i,j,n,m,a[100][100],b[100][100],flag;
	
	scanf("%d",&n);	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	    
	scanf("%d",&m);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d",&b[i][j]);//输入数组 
	
	flag=0;
	if(m==1){
	    for(i=0;i<=n;i++)
	    	for(j=0;j<=n;j++)
	        	if(a[i][j]==b[0][0]){
	   	        	printf("%d,%d\n",i+1,j+1);
	   	        	flag=1;
	   	        	break;
				}
	}//想法不错，分类讨论 
	
	if(m>1){
	   	   for(i=0;i<n;i++)
	   	        for(j=0;j<n;j++)//找到a[]的数 
	   	        	if(a[i][j] == b[0][0]
				   			&& a[i][j+1] == b[0][1]
							   && a[i+1][j] == b[1][0]
							   		&& a[i+1][j+1] == b[1][1]){
	              		printf("%d,%d\n",i+1,j+1);
	              		flag=1;
					}
			}
	if(flag==0)
	printf("-1");
	return 0;
}
