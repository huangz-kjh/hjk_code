/*#include<stdio.h>
void calculate(double x,double y,double *he,double *cha,double *ji,double *shang)
{
	*he=x+y;
	*cha=x-y;
	*ji=x*y;
	*shang=x/y;
}
void main()
{
	double n_1,n_2,he,cha,ji,shang;
	scanf("%lf%lf",&n_1,&n_2);
	calculate(n_1, n_2, &he, &cha, &ji, &shang);
	printf("%g %g %g %g\n",he,cha,ji,shang);
}*/
#include<stdio.h> 
void calculate(double x,double y,double *he,double *cha,double *ji,double *shang)
{	
	*he=x+y;
	*cha=x-y;
	*ji=x*y;
	*shang=x/y;
}
void main()
{
	double n_1,n_2,he,cha,ji,shang;
	scanf("%lf%lf",&n_1,&n_2);
	double *p = &he,*q = &cha,*w = &ji,*u = &shang;
	calculate(n_1,n_2,p,q,w,u);
	printf("%g %g %g %g\n",he,cha,ji,shang);
}
