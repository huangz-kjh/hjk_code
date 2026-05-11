#include<stdio.h>
void input(int *p,int *n){
	int i=0,n1=*n;
	do{
		scanf("%d",&p[i]);
		i++;	
		n1++;	
	}
	while(p[i-1]!=-1);
	*n=n1-1;
}
void output(int *p,int n){
	int i=0;
	for (i=0;i<n;i++)
		printf ("%d ",p[i]);
	printf ("\n");
}
void sort(int *p,int n){
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(p[j]>p[j+1]){		//ÉýÐò 
				t=p[j];p[j]=p[j+1];p[j+1]=t;
			}
}
void conbine(int *a,int *n1,int *b,int n2){
	int i,j;
	for (i=*n1,j=0;j<n2;i++,j++){
		a[i]=b[j];
		*n1=*n1+1;
	}
}
void find(int *a,int n1,int *c,int *n3){
	int i,j=0;
	for (i=0; i<n1-1; i++){
		if (a[i] == a[i+1]){
			c[j]=a[i];
			j++;
		}
	}		
	*n3=j;
}
void main(){
	int a[41],b[21],c[21];
	int n1=0,n2=0,n3=0;
	
	input(a,&n1);
	input(b,&n2);
	
	conbine(a,&n1,b,n2);
	
	sort(a,n1);
	
	find(a,n1,c,&n3);	
	
	output(c,n3);
}
