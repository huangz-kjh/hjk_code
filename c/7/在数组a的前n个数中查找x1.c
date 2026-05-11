/*输入n（0<n<=10），再输入n个数，利用指针，置逆后重新输出；再输入一个要查找的数，找到了输出在数组中对应的下标，没找到输出no，循环3次查找3个数据，请设计四个子函数：

1.void input(int a[],int n) 实现向数组a输入n个数；

2.void output(int a[],int n) 实现将数组a的前n个数输出；

3.void reserve(int a[],int n) 实现将数组a的前n个数置逆；

4.int find(int a[],int n,int x) 实现在数组a的前n个数中查找x；若找到返回元素下标，若没找到，返回-1.

*/
#include<stdio.h>
void input(int *p,int n)
{
	int i;
	printf ("输入数据：\n");
	for (i = 0; i < n; i++)
		scanf ("%d",&p[i]); 
}
void output(int *p,int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf ("%d ",p[i]);
	printf ("\n");
}
void sort(int *p,int n)
{
	//冒泡排序
/*	int i,j,t;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++)
			if (p[j] < p[j+1])//降序 
			{
				t = p[j]; p[i] = p[j]; p[j] = t;
			}*/
	//选择排序
	int i,j,t,index;
	for (i = 0; i < n-1; i++)
	{
		index = i;
		for (j = i+1; j < n; j++)
			if (p[index] < p[j])//降序 
				index = j;
		if (index != i)
		{
			t = p[index]; p[index] = p[j]; p[j] = t;
		}
	}
		
		 
}
void reserve(int *p,int n)
{
	int i,j,t;
	for (i = 0,j = n-1;i < j; i++, j--)
	{
		t = p[i]; p[i] = p[j]; p[j] = t;
	}
}
int find(int *p,int n,int *index)
{
	int x,i,m;
	printf ("x=\n");
		scanf ("%d",&x);
	for (i = 0; i < n; i++)
		if (p[i] == x)
			*index = i;
}
void main()
{
	int a[10],n,index,i;
	printf ("n=\n");
	scanf ("%d",&n); 
	input(a,n);
	reserve(a,n);
	printf ("置逆后：\n");
	output(a,n);
	for (i = 0; i < 3; i++)
	{
		index = -1;
		find(a,n,&index);
		if (index != -1)
			printf ("下标=%d\n",index);
		else
			printf 	("没找到\n");

	}	
 } 
