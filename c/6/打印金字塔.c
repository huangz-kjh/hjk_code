#include<stdio.h>
void print(int n)
{
	int i,j,x;
		for (x=1; x<=n; x++){
			for (i=n-x; i>=1; i--)
				printf (" ");
			for (j=1; j<=x; j++)
				printf ("%d ",x);
			printf ("\n");
		}
}
/*		  n=4	     ¿Õ¸ñ     Êý×Ö 
		   1      1   3 		1
		  2 2     2	  2 		2
		 3 3 3    3   1	    	3
		4 4 4 4   4   0		    4
*/
void main()
{
	int n;
	scanf ("%d",&n);
	print(n);
 } 
