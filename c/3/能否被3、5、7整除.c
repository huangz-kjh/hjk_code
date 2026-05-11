#include<stdio.h>
int main()
{
	int num,temp;
		printf("Enter unm :");
		scanf("%d",&num);
	
		if(num%3==0) temp++;
		if(num%3==0) temp++;
		if(num%3==0) temp++;
		
		switch(temp)
			case 0:
				printf("Can not be divisible by 3,5,7.");
				break;
				
			case 1:
				if(num%3==0)
					printf("Can be divisible by 3.");
				
				if(num%5==0)
					printf("Can be divisible by 5.");
					
				if(num%7==0)
					printf("Can be divisible by 7.");
				
				break;
				
			
	return 0;
}
