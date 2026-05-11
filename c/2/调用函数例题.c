 #include<stdio.h>
 int main()
 {
 	int x,answer;
 	 
	int sign(int h);
 	
	printf("Enter x: \n");
	scanf("%d",&x);
	
	answer=sign(x);
	
	printf("sign(%d)=%d",x,answer);
	
	return 0; 
}

	int sign(int h)
	{
	int w;
	
		if(h>0) w=1;
	
		else if(h=0) w=0;
	
		else w=-1;
	
	return(w);	
			
	}
