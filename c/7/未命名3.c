#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	char ch;
	ch=getchar();
	while(ch!=EOF){
		if(ch==' ')
			a++;
		if(ch=='\t')
			b++;
		if(ch=='\n')
			c++;
		ch=getchar();
	}
printf("%d %d %d\n",a,b,c);
}



