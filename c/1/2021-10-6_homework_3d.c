#include<stdio.h>
#include<math.h>
int main()
{	printf("Enter money,year and rate: ") ;
	double money,year,rate,interest;
	scanf ("%lf%lf%lf",&money,&year,&rate);
	
	interest=money*pow(1+rate,year)-money;
	
	printf ("\ninterest=%.2lf\n",interest);
return 0;}


