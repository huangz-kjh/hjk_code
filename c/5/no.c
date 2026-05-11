#include<stdio.h>
int main()
{
	int i,j,index,temp,n,a[20],b[20],c[20],len_a,len_b,len_c;
	scanf ("%d",&len_a);
	//输入a[] 
	for (i=0;i<len_a;i++)
	{
		scanf("%d",&a[i]);
	 	b[i]=a[i];
	}	
	//a[]排序
	for (i=0;i<len_a-1;i++)
	{
		index=i;
		for (j=i+1;j<len_a;j++)
			if (a[j]<a[index])	
				index=j;
		if (index!=i)	
			{temp=a[index]; a[index]=a[i]; a[i]=temp;}		
	}

	//对a[]去重 并复制给c[] 
	c[0]=a[0];
	for (i=0,j=0;i<len_a-1;)
	{
		if (a[i]!=a[i+1])                 //a[0]=1,a[1]=2,a[2]=3,a[3]=3,a[4]=4,a[5]=5
			{j++; i++; c[j]=a[i];   }   //c[0]=1,c[1]=2,c[2]=3,       c[3]=4,a[4]=5		
		else
			i++;
	}	
	//输出序号		
	len_c=j+1;
	for (i=0;i<len_a;i++)
		for (j=0;j<len_c;j++)
		{
			if (b[i]==c[j])  printf (" %d",j+1);
		}	
	return 0;
}



