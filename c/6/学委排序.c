#include<stdio.h>
void input(int p[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf ("%d",&p[i]);
}
void output(int p[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf ("%-8.d",p[i]);
	printf ("\n");
}
void sort(int *p, int n)
{
	/*int i,j,temp;					//Ã°ÅÝÅÅÐò
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++)
			if (p[j] < p[j+1])
			{
				temp = p[j]; 
					p[j] = p[j+1]; 
						p[j+1] = temp;
			} */
	
	int i,j,temp,index;				//Ñ¡ÔñÅÅÐò 
	for (i = 0; i < n-1; i++)
	{
		index = i; 
		for (j = i + 1; j < n; j++)
			if (p[index] < p[j])
				index = j;
			if (index != i)
			{
				temp = p[index]; 
					p[index] = p[i]; 
						p[i] = temp;
			}

	}	
}
void main()
{
	int a[10];
	printf("Please input score:\n");
	input(a,10);
		sort(a,10);
			output(a,10);
}
