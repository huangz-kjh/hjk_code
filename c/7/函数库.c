#include<stdio.h>
/*
 一、 单个数 
	1.输入的格式：&n,
	2.接收的格式：*n,
二、 数组
	1.输入格式：a,&a[0],
	2.输出格式： *a,a[],
*/
void input(int p[],int n)
{
	int i;
	printf ("Enter %d data:\n",n);
	for (i = 0; i < n; i++)
		scanf ("%d",&p[i]);
}
void output(int p[],int n)
{
	int i;
	printf ("Output %d data:\n",n);
	for (i = 0; i < n; i++)
		printf ("%d ",p[i]);
	printf ("\n");
}
void sort(int *p, int n)
{
	/*int i,j,temp;					//冒泡排序
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++)
			if (p[j] < p[j+1])
			{
				temp = p[j]; 
					p[j] = p[j+1]; 
						p[j+1] = temp;
			} 
	*/
	int i,j,temp,index;				//选择排序 
	for (i = 0; i < n-1; i++)
	{
		index = i; 
		for (j = i+1; j < n; j++)
			if (p[i] < p[j])
				index=j;
			if (index != j)
			{
				temp = p[i]; 
					p[i] = p[index]; 
						p[index] = temp;
			}

	}		
}
void reverse(int *p,int n)//回文 
{
	int i,j,temp;
	for (i = 0,j = n-1; i < j; i++,j--)//最好的是“i < j"这一步 
		{
			temp = p[j]; 
				p[j] = p[i]; 
					p[i] = temp;
		}		
}
void insert(int *p,int *p_n,int max)//插入一个数 
{
	int n,x;
	n = *p_n;
	if (n >= max)
		printf ("人数已满，不能输入\n");
	else
	{
		printf("x =");
			scanf("%d",&x);
		p[n] = x;
			n++;
				*p_n = n;
	}
	sort(p,n);
}
/*void insert(int *p,int *p_n,int max)//插入多个数 
{
	int n,x,person;
	scanf ("%d",&person);
	n = *p_n + preson;
	if (n >= max)
		printf ("人数已满，不能输入\n");
	else
	{
		printf("x =");
			scanf("%d",&x);
		p[n] = x;
			n++;
				*p_n = n;
	}
	sort(p,n); 
}*/
void main()
{
	int a[20];
	int n;
	
	printf ("n =");
	scanf ("%d",&n);
	
	input(a,n);
		output(a,n);
	
	sort(a,n);
		output(a,n);
	
	reverse(a,n);
		output(a,n);
	
	insert(a,&n,20);
		output(a,n);
}
 
