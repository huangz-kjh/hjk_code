#include<stdio.h>
main()
{
	char ch;
	double num1,num2,answer;
	
	scanf("%lf%c%lf",&num1,&ch,&num2);
	

	switch(ch)
	{	
		{case '+': 
			answer=num1+num2;
			break;
		}
		
		{case '-':
			answer=num1-num2;
			break;
		}
		
		{case '/':
			answer=num1/num2;
			break;
		}
		
		{case '*':
			answer=num1*num2;
			break;
		}
		
		default:
			printf("ÎŞĞ§ÔËËã·û\n");
	}
	
	printf("answer=%.2lf",answer);
	
	return 0;
}
