#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
input(int *p){
	int i;
	for(i=0;i<10;i++){
		scanf ("%d",&p[i]);
	}
}
output(int *p){
	int i;
	for(i=0;i<10;i++){
		printf ("%d ",p[i]);
	}
	printf ("\n");
}
/*sort(int *p){
	int i,j,temp,index;
	for (i=0;i<9;i++){
		index=i;
		for (j=i+1;j<10;j++){           //            9
			if(p[index]>p[j]){				//8,6,5,7,8,5,2,3,6
				index=j;	
			}	
		}
		if(index!=i){
			temp=p[i];
			p[i]=p[index];
			p[index]=temp;
		}
	}

}*/
sort(int *p){
	int i,j,temp;
	for (i=0;i<9;i++){
		for (j=0;j<9-i;j++){
			if (p[j]>p[j+1]){
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;	
			}
		}		
	}
	
} 
void main(){
	int a[10]={9,8,6,5,7,8,5,2,3,6};
	
	//input(a);
	output(a);
	sort(a);
	output(a);
	
}
