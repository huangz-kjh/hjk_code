#include<stdio.h>
int main()
{	
	int num;
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0 && num%7==0)
		printf("Can be divisible by 3,5,7.");
			
	else if(num%3==0 && num%5==0 && num%7!=0)
		printf("Can be divisible by 3,5.");
		
	else if(num%3==0 && num%5!=0 && num%7==0)
		printf("Can be divisible by 3,7.");
			
	else if(num%3!=0 && num%5==0 && num%7==0;	
		printf("Can be divisible by 5,7.");
		
	else if(num%3!=0 && num%5!=0 && num%7==0)
		printf("Can be divisible by 7.");
		
	else if(num%3!=0 && num%5==0 && num%7!=0)
		printf("Can be divisible by 5.");
			
	else if(num%3==0 && num%5!=0 && num%7!=0)
		printf("Can be divisible by 3.");
					
	else	
		printf("Can not be divisible by 3,5,7.");
	/*如果条件想的不够充分的话，严谨的条件应该在前面，不然就要犯错。
	合适的顺序可以取代很多条件 
	*/
	return 0;
	}	 
