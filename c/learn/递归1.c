#include<stdio.h>       //n=(n-1)+5
int a(int n){
	int year;
	if (n==1)
		return 5;
	else 
		return year=a(n-1)+5;
}
void main(){
	int year;
	year=a(5);
	printf ("%d",year);
} 
//n=5    a(5)=a(4)+5
//n=4    a(4)+a(3)
//n=3    a(3)+a(2)
//n=2    a(2)+a(1)
//n=1    a(1)=5
