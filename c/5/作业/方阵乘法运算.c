#include<stdio.h>
int main()
{
	//intpt a
	int a[10][10],b[10][10],c[10][10],i,j,k,lenth;
	scanf("%d",&lenth);
	for(i=0;i<lenth;i++)
		for(j=0;j<lenth;j++)
			scanf("%d",&a[i][j]);
	//intput b
	for(i=0;i<lenth;i++)
		for(j=0;j<lenth;j++)
			scanf("%d",&b[i][j]);
	//¼ÆËã c
	for(i=0;i<lenth;i++)
		for(j=0;j<lenth;j++)
			for(k=0,c[i][j]=0;k<lenth;k++)
				c[i][j]+=a[i][k]*b[k][j];
	//output c
	//	printf("c:\n");
		for(i=0;i<lenth;i++)
		{	for(j=0;j<lenth;j++)
				printf("%10d",c[i][j]);
			printf("\n");
		}
	return 0;
}


