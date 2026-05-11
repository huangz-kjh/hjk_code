#include<stdio.h>
int main()
{
	double answer,x1,x2;
	char ch;
	scanf("%lf%c%lf",&x1,&ch,&x2);
	
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
	{
		if(ch=='+') answer=x1+x2;
		if(ch=='-') answer=x1-x2;
		if(ch=='*') answer=x1*x2;
		if(ch=='/' && x2!=0) answer=x1/x2;
		printf("=%.2lf",answer);
	}
	else
		printf("ÎÞÐ§ÔËËã·û\n");
	
	return 0;
}
