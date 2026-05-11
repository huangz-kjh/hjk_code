#include<stdio.h>
/*void input(int *p,int n){
	int i;
	//printf("enter %d data:",n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
}*/
void input(int *p,int *n){
	int i=0,n1=*n;
	do{
		scanf("%d",&p[i]);
		i++;	
		n1++;//49863110
			//	49577119	
	}
	while(p[i-1]!=-1);
	*n=n1-1;
}
void output(int *p,int n){
	int i;
//	printf("output %d data:",n);
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
void main(){
	int a[100],b[100];
	int n1,n2;
	
	/*scanf ("%d",n1);
	scanf ("%d",n2);
*/	
	input(a,&n1);
	input(b,&n2);
	
	output(a,n1);
	output(b,n2);
}
