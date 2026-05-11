#include<stdio.h>
int main()
{	int a1,a2,b1,b2;
	scanf ("%d%d%d%d",&a1,&a2,&b1,&b2);
	
	printf ("Input a1,a2,b1,b2:\n(%d+%di)*(%d+%di)=%d+%di\n",a1,a2,b1,b2,a1*b1-a2*b2,a1*b2+a2*b1);

return 0;}


