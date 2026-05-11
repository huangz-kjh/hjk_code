#include <stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);

	if(ch=='a') 
		ch=ch-32;
	else if(ch>='A'&&ch<='Z')
		ch=ch+32;

	printf("%c\n",ch);
}

