#include<stdio.h>
int main()
{
	double x1,x2,answer;
	char ch;
	scanf("%lf%c%lf",&x1,&ch,&x2);
	
		if(ch=='+')
			printf("=%.2lf\n",x1+x2);	
		else if(ch=='-')
			printf("=%.2lf\n",x1-x2);
		else if(ch=='*')
			printf("=%.2lf\n",x1*x2);
	
		else if(ch=='/')
			printf("=%.2lf\n",x1/x2);
	
		else
			printf("ÎŞĞ§ÔËËã·û\n");
	
	return 0;	
 } 
