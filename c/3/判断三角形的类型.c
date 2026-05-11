#include<stdio.h>
int main()
{
	double r1,r2,r3;
	
	scanf("%lf%lf%lf",&r1,&r2,&r3);
	
	if(r1+r2>r3 && r1+r3>r2 && r3+r2>r1)
	{
		if(r1==r2 && r2==r3)
			printf("equilateral triangle\n");
		
		else if(r1==r2 || r1==r3 || r2==r3)
			printf("isoceles triangle\n");
			
		else if(r1*r1+r2*r2==r3*r3 || r1*r1+r3*r3==r2*r2 || r3*r3+r2*r2==r1*r1)
			printf("right-angled triangle\n");
		
		else
			printf("arbitrary triangle\n");	
	}
	else
		printf("It isn't triangle\n");
	return 0;
}
