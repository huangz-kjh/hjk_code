#include<stdio.h>
void main()
{
	char a[80];
	int i,word=0,count=0;
	gets (a);
	for(i=0; a[i]!=EOF; i++)
		if(a[i]==' ')
			word=0;
		else if(word==0)
		{	
			word=1;
			count++;
		}
	printf("%d",count);
}
