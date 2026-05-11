#include<stdio.h>
void main()
{
	int n,m,i,j,x,y;
	int a[9][9],b[9][9];
	
	scanf ("%d",&n);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf ("%d",&a[i][j]);
	
	scanf ("%d",&m);
	for (i=0; i<m; i++)
		for (j=0; j<m; j++)
			scanf ("%d",&b[i][j]);//输入数组 
	
	for (i=0; i<n-m+1; i++)
		for (j=0; j<n-m+1; j++)//搜寻数组 
			if (a[i][j]==b[0][0])
			{	
				for (x=0; x<m; x++)
					for (y=0; y<m; y++)//遍历数组 	
						if (a[x+i][y+j]!=b[x][y])
							break;
				if (x>=m && y>=m)
				{
					printf ("%d,%d",i+1,j+1);
					break;
				}
				else
					printf ("-1");	
			}
						
					
}
