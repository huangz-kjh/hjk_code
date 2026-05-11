#include<stdio.h>
int main()
{
	double x1,x2,answer;
	char ch;
	scanf("%lf%c%lf",&x1,&ch,&x2);
	
	switch(ch)
	{
		case '+':
			answer=x1+x2;
			printf("=%.2lf\n",answer);
			break;
		case '-':
			answer=x1-x2;
			printf("=%.2lf\n",answer);
			break;
		case '*':
			answer=x1*x2;
			printf("=%.2lf\n",answer);
			break;
		case '/':
			answer=x1/x2;
			printf("=%.2lf\n",answer);
			break;
		default:
			printf("ÎŞĞ§ÔËËã·û");
			break;
	}

	return 0;	
 } 
