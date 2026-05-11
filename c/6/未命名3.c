#include<stdio.h>
#include<string.h>
void input(int p[],int n){
	int i;
	for(i=0;i<n;i++) 
		scanf("%d",&p[i]);
}
int hebing(int a[],int b[],int *n,int m){
	int i,j;
		for(i=*n,j=0;i<*n+m;i++,j++)
			a[i]=b[j];
			*n=*n+m;
}
/*void del(int *a,int *n1){
	int i,k,n=*n1;
	for (i=0;i<n-1;i++)	
		if ((a[i+1] % a[i]) == 0){
			for (k=i+1; k<n-1; k++){
				a[k]=a[k+1];
			}
			n--;
			i--;
		}	
	*n1=n;
}*/
void del(int *a,int *n1){
	int i,j,k,n=*n1;
	for (i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
			if ((a[j] % a[i]) == 0){
				for (k=j; k<n-1; k++){
					a[k]=a[k+1];
				}
				n--;
				j--;
			}	
		}		
	}
	*n1=n;
}
int sort(int p[],int k){
	int i,j,t;
	for(i=0;i<k;i++)
		for(j=0;j<k-1;j++)
			if(p[i]<p[j])
				{t=p[i];p[i]=p[j];p[j]=t;}
		return p[i];
}
void output(int p[],int n){
	int  i;
	for(i=0;i<n;i++) 
		printf("%d ",p[i]);
}
int main (){
	int a[500],b[500],n,m;
	scanf("%d",&n);	input(a,n);
	scanf("%d",&m); input(b,m);
	    hebing(a,b,&n,m);
		sort(a,n);	
	 	del(a,&n);
		output(a,n);
}
