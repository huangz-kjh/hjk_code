#include<stdio.h>
int main()
{
	int a[30]={1,1},i,j;
	for(i=2;i<30;i++)
		a[i]=a[i-1]+a[i-2];//Ëã³öÊýÁÐ 
	for(i=0;i<6;i++)
	{	for(j=5*i;j<5*i+5;j++)
			printf("%-8d",a[j]);
		printf("\n");	
	}		
	return 0;
}


