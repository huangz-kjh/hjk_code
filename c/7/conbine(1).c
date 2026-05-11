#include<stdio.h>
void input(int *p,int n){
	int i;
	//printf("enter %d data:",n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
}
void output(int *p,int n){
	int i;
//	printf("output %d data:",n);
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
void sort(int *p,int n){
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(p[j]>p[j+1]){		//ÉıĞò 
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
void del(int *a,int *n1){
	int i,k,n=*n1;
	for (i=0;i<n-1;i++)	
		if (a[i] == a[i+1]){
			for (k=i; k<n-1; k++){
				a[k]=a[k+1];
			}
			n--;
			for (k=i; k<n-1; k++){
				a[k]=a[k+1];				
			}
			n--;
			i--;
		}	
	*n1=n;
}
void main(){
	int a[40],b[20];
	int n1,n2,i,k=0;
	scanf ("%d",&n1);
	input(a,n1);
	scanf ("%d",&n2);
	input(b,n2);

	conbine(a,&n1,b,n2);			
									
	sort(a,n1);						
									
	del(a,&n1);
	
	output(a,n1);
}

//9 8 7 0
//7 8 9 6 
//0 6 7 7 8 8 9 9 
//0 6 7 8 8 9 9
//0 6 8 8 9 9
//0 6 8 8


