#include<stdio.h>
#include<string.h>
void sum(int array[])
{
	int n = strlen (array);
	int x[n+1];
	int h,i,j;
	for (i=0; i<=n; i++)
	{
		h = 0;
		for(j = 0; array[i] > 0;)
		{
			j = array[i] % 10;
			array[i] = (array[i] - j) / 10;
			h = h + j; 
		}
		x[i] = h;
	} 
	for(i = 0; i <= n; i++)
	{
		array[i] = x[i];	
	}
}
void mian()
{
	int n;
	scanf ("%d",&n);
	int array[n];
	for (i=0; i<n; i++)
	{
		scanf ("%d",&array[i]);
	}							//ÊäÈëÊı×é 
	sum(array);
	for (i=0; i<n-1; i++)
	{
		printf ("%d ",array[i]);
	}
	printf ("%d",array[n-1]);
}
