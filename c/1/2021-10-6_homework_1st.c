#include<stdio.h>
#include<math.h>
int main()
{	double x1,x2,y1,y2,distance;
	
	printf("Input(x1,y1): \n");
	scanf ("%lf%lf",&x1,&y1);
	printf("Input(x2,y2): \n");
	scanf ("%lf%lf",&x2,&y2);
	
	distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	printf ("distance=%.2lf\n",distance);
 
 	return 0;} 


