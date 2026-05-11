#include<stdio.h>
int main(void)
{
	int i,x,n;
	double a=3.0,p=2.5,o=4.1,g=10.2;
	printf("[1]apples\n[2]pears\n[3]oranges\n[4]grapes\n[0]exit\n");
	printf("Enter choice: ");
	scanf("%d",&x);
	
	for(i=1;;i++)
	{
			switch(x)
		{	case 0:break;
			case 1:
			printf("price=%.1lf\n",a);
			printf("Enter choice:");
			scanf("%d",&x);
			break;
			case 2:
			printf("price=%.1lf\n",p);
			printf("Enter choice: ");
			scanf("%d",&x);
			break;
			case 3:
			printf("price=%.1lf\n",o);
			printf("Enter choice: ");
			scanf("%d",&x);
			break;
			case 4:
			printf("price=%.1lf\n",g);
			printf("Enter choice: ");
			scanf("%d",&x);
			break;
			default:
			printf("price=0\n");
			printf("Enter choice: ");
			scanf("%d",&x);
		}
		n++;
		if(n==5){
		printf("Thank you!");
		break;}
	}
	return 0;
}
