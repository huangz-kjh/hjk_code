#include<stdio.h>
int main()
{int a,first,second,thrid;
scanf ("%d",&a);
first=a/100;
thrid=a%50;
second=(a-(100*first+thrid) )/10;
printf ("%d %d %d\n",thrid,second,first);
return 0;}
 

