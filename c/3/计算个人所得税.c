#include<stdio.h>
#include<math.h>
int main()
{	
	double salary,rate,tax;
	int deduction;

	//printf("Enter the salary: ");
	scanf("%lf",&salary);
	if(salary>0)
	{
		if(salary<=3500)
		{
			deduction=0;
			rate=0;
		}
	
		else if(salary<=5000)
		{
			deduction=0;
				rate=0.03;
		}
	
		else if(salary<=8000)
		{
			deduction=105;
				rate=0.1;
		}
	
		else if(salary<=1250)
		{
			deduction=555;
				rate=0.2;
		}
	
		else if(salary<=38500)
		{
			deduction=1005;
				rate=0.25;
		}
	
		else if(salary<=58500)
		{
			deduction=2755;
				rate=0.3;
		}
		
		else if(salary<=83500)
		{
			deduction=5505;
				rate=0.35;
		}
		
		else
		{
			deduction=13505;
				rate=0.45;
		}
			
	}
	else
		printf("Error\n");
	
	tax=fabs(rate*(salary-3500)-deduction);

		printf("%.2lf",tax);
		
	return 0;
}
