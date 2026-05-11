#include<stdio.h>
int main()
{	
	int year,month,day,answer;

	printf("Input year, month, day: \n ");
	scanf("%d%d%d",&year,&month,&day);
	
	if((year%4==0 && year%100!=0) || year%400==0)

		
	return 0;	
}//1.设二月为X
//2.闰年为平年加1
//3.循环，switch倒写 
