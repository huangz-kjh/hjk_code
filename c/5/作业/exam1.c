#include<stdio.h>
void main()
{
	int a[100],b[100],c[10],d[100];
	int i,j,x,len_a,len_b,len_c,len_d,temp,count,flag=0;
	
	scanf ("%d",&len_a);
		for (i=0;i<len_a;i++)
			scanf ("%d",&a[i]);
	
	scanf ("%d",&len_b);
		for (i=0;i<len_b;i++)
			scanf ("%d",&b[i]);			//输入数组 
	
	for (i=0;i<len_a;i++)
		for (j=0;j<len_b;j++)
			if(a[i]==b[j])
				flag=1;   				//判断是否有重复数字 
							 
	if(flag==0)
		printf("No Answer\n");
	else
	{ 
		x=0;		
		for (i=0;i<len_a;i++)
			for (j=0;j<len_b;j++)
				if (a[i]==b[j])
				{
					c[x]=a[i];    
					x++;          //赋值 
				}
		//排序、去重
		len_c=x;
		for(i = 0; i < len_c-1; i++)
			for(j = i+1; j < len_c; j++)
				if (c[j]>c[i])
				{	temp = c[j];
						c[j] = c[i];
							c[i] = temp;
					}
			
		d[0]=c[0];
		for (i = 0,j = 0; i < len_c - 1; )
			if (c[i] != c[i+1])
				{i++; j++; d[j]=c[i];}
			else
				i++;
		
		len_d=j+1;									 	
		for(i=0; i<len_d-1; i++)
		{
			for (j=0; j<len_d-1-i; j++)
				if (d[j]<d[j+1])
				{
					temp=d[j]; 
						d[j]=d[j+1]; 
							d[j+1]=temp;	//冒泡排序与选择排序记住就好 
				}
		}
		for (j=0;j<len_d;j++)
			printf("%d ",d[j]);

	} 
		
}
