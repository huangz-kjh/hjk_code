#include<stdio.h> 
void input(int *p,int n)
{
	int i;
	printf("enter %d data:",n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
}
void output(int *p,int n)
{
	int i;
	printf("output %d data:",n);
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
void sort(int *p,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(p[j]<p[j+1]){
				t=p[j];p[j]=p[j+1];p[j+1]=t;
			}
}
void reserve(int p[],int n)
{
	int i,j,t;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		t=p[j];p[j]=p[i];p[i]=t;
	}
}
void insert(int *p,int *pn,int max)
{
	int n,x;                               
	n=*pn;
	if(n>=max)
		printf("空间已满，无法新增\n");
	else{
		printf("新增x="); 
			scanf("%d",&x);
		p[n]=x; n++; *pn=n;
		sort(p,n);
	}	
}
void del(int *p,int *pn,int index)
{
	int i,n;  	
	n=*pn;  //    n-2,n-1
	
	if(index>=0 && index<n){
		for(i=index;i<n-1 ;i++)
			p[i]=p[i+1];
		n--;
		*pn=n;
	}
	else
		printf("错误\n"); 	
}/*
index=0
    i=index
2 5 4 6
  p[i]=p[i+1]
*/

int find(int*p,int n,int x)
{
	int re=-1,i;
	for(i=0;i<n;i++)
		if(p[i]==x){
			re=i;break;
		}	
	return re;
}

int main()
{
	int a[10],n,*p;
	p=a;
	printf("n=");	scanf("%d",&n);
	input(a,n);		output(a,n);
	sort(a,n);		output(a,n);
	reserve(a,n);	output(a,n);
	insert(a,&n,10);output(a,n);
	del(a,&n,0);		output(a,n);
	
	for(i=0;i<3;i++)
	{
		printf("x=\n");	scanf("%d",&x);
		result=find(a,n,x);
		if(result==-1)
			printf("没找到\n");
		else
			printf("下标=%d\n",result);
	}

	return 0; 
}

