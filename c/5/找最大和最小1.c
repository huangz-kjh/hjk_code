#include<stdio.h>
int main()
{
	int n,i,max,min;
		scanf("%d",&n);
	int score[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&score[i]);
	
	for(i=0,min=max=score[0];i<n;i++)
	{
		if(max<score[i])
			max=score[i];
		else if(min>score[i])
			min=score[i];
	}
	printf("%d %d",max,min);
	return 0;
}
