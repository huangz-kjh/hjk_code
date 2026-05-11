#include <stdio.h>
int main()
{	int second,hour,minute;

	scanf ("%d",&second);

	hour=second/3600;
	minute=(second-hour*3600)/60;
	second=second-hour*3600-minute*60;

	printf ("\nHours: %d\nMinutes: %d\nSeconds: %d\n",hour,minute,second);
 return 0;} 


