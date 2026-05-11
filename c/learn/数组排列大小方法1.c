#include<stdio.h>
void main()
{
	int a[8]={1,2,3,6,9,6,6,5};
	int i,j,index,t;
	for(i=0;i<8;i++)
		for(j=i+1;j<8;j++)
			if(a[i]>a[j])
			{
				index=j;
				t=a[i]; a[i]=a[index]; a[index]=t;
			}
	for(i=0;i<8;i++)
		printf("%d",a[i]);					
 } 
