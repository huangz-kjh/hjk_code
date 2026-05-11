#include <stdio.h>
void input(int *(*p)[10],int n1,int n2){
	int i,j;
	for(i=0;i<n1;i++)
		for (j=0;j<n2;j++)
			scanf("%d",(*(p+i)+j));
}
void output(int *(*p)[10],int n1,int n2){
	int i,j;
	for(i=0;i<n1;i++)
		for (j=0;j<n2;j++)
			printf("%d",*(*(p+i)+j));
}
void main()  {
	int a[10][10];
	int n1,n2;
	scanf ("%d",&n1);
	scanf ("%d",&n1);
	
	input(a,n1,n2);
	output(a,n1,n2);
} 
