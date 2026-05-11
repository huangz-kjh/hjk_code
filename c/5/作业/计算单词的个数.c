//”–Œ Ã‚ 
#include<stdio.h>
void main()
{
	char ch;
	int word=0,count=0;
	while((ch=getchar())!=EOF)
	{
		if(ch==' ')
			word=0;
		else if(word==0)
		{	
			word=1;
			count++;
		}			
	}
	printf("%d",count);	
 } 
