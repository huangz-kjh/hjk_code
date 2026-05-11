#include<stdio.h>
int main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	int score[n];
	for(i=0;i<n;i++)
		scanf("%d",&score[i]);
	for(i=0;i<(n-1);i++)
		for(j=(i+1);j<n;j++)
			if(score[i]<score[j])
			{
				temp=score[i];
				score[i]=score[j];
				score[j]=temp;
			}
	for(i=0;i<n;i++)
	printf(" %d",score[i]);	
	return 0;
 } 
