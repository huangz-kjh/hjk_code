#include<stdio.h>
#define JAN 31
#define FEB1 29
#define FEB2 28
#define MARCH 31
#define APRIL 30
#define MAY 31
#define JUNE 30
#define JULY 31
#define AUG 31
#define SEPT 30
#define OCT 31
#define NOV 30
#define DEC 31
int main()
{	
	int year,month,day,answer;

	printf("Input year, month, day: \n ");
	scanf("%d%d%d",&year,&month,&day);
	
	if((year%4==0 && year%100!=0) || year%400==0)
	{  
		switch(month)
		{
			case 1:
				answer=day;
				printf("Days of year: %d",answer);
				break ;
			
			case 2:
				answer=JAN+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 3:
				answer=JAN+FEB1+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 4:
				answer=JAN+FEB1+MARCH+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 5:
				answer=JAN+FEB1+MARCH+APRIL+day;
				printf("Days of year: %d",answer);
				break ;
			
			
			case 6:
				answer=JAN+FEB1+MARCH+APRIL+MAY+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 7:
				answer=JAN+FEB1+MARCH+APRIL+MAY+JUNE+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 8:
				answer=JAN+FEB1+MARCH+APRIL+MAY+JUNE+JULY+day;
				printf("Days of year: %d",answer);
				break ;
			
			
			case 9:
				answer=JAN+FEB1+MARCH+APRIL+MAY+JUNE+JULY+AUG+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 10:
				answer=JAN+FEB1+MARCH+APRIL+MAY+JUNE+JULY+AUG+SEPT+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 11:
				answer=JAN+FEB1+MARCH+APRIL+MAY+JUNE+JULY+AUG+SEPT+OCT+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 12:
				answer=JAN+FEB1+MARCH+APRIL+MAY+JUNE+JULY+AUG+SEPT+OCT+NOV+day;
				printf("Days of year: %d",answer);
				break ;

			default: printf("Error\n");
		}
	}
	else
	{
	
		switch(month)
		{
			case 1:
				answer=day;
				printf("Days of year: %d",answer);
				break ;
			
			case 2:
				answer=JAN+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 3:
				answer=JAN+FEB2+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 4:
				answer=JAN+FEB2+MARCH+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 5:
				answer=JAN+FEB2+MARCH+APRIL+day;
				printf("Days of year: %d",answer);
				break ;
			
			
			case 6:
				answer=JAN+FEB2+MARCH+APRIL+MAY+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 7:
				answer=JAN+FEB2+MARCH+APRIL+MAY+JUNE+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 8:
				answer=JAN+FEB2+MARCH+APRIL+MAY+JUNE+JULY+day;
				printf("Days of year: %d",answer);
				break ;
			
			
			case 9:
				answer=JAN+FEB2+MARCH+APRIL+MAY+JUNE+JULY+AUG+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 10:
				answer=JAN+FEB2+MARCH+APRIL+MAY+JUNE+JULY+AUG+SEPT+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 11:
				answer=JAN+FEB2+MARCH+APRIL+MAY+JUNE+JULY+AUG+SEPT+OCT+day;
				printf("Days of year: %d",answer);
				break ;
			
			case 12:
				answer=JAN+FEB2+MARCH+APRIL+MAY+JUNE+JULY+AUG+SEPT+OCT+NOV+day;
				printf("Days of year: %d",answer);
				break ;

			default: printf("Error\n");
		}
	}	
		return 0;	
}

