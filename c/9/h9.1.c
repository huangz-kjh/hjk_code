#include<stdio.h>
struct student{
	int no;
	char name[10];
	float score; 
}s1,s2;
void main(){
	scanf("%d%s%f",&s1.no,s1.name,&s1.score);
	scanf("%d%s%f",&s2.no,s2.name,&s2.score);
	printf("The higher score is:\n");
	if(s1.score>s2.score)
		printf("%d %s %.2f\n",s1.no,s1.name,s1.score);
	else if(s1.score<s2.score)
		printf("%d %s %.2f\n",s2.no,s2.name,s2.score);
	else{
		printf("%d %s %.2f\n",s1.no,s1.name,s1.score);
		printf("%d %s %.2f\n",s2.no,s2.name,s2.score);
	} 
}
/*#include<stdio.h>
#include<string.h>
struct student{
	char a[10];
	float score;
	int no;
};
void input(struct student *p){
	int i;
	for (i=0;i<2;i++){
		scanf ("%d%s%f",&p[i].no,p[i].a,&p[i].score);
	}
}
int compare(struct student *p){
	if (p[0].score > p[1].score)
		return 0;
	if (p[0].score < p[1].score)
		return 1;
	if (p[0].score == p[1].score)
		return 3;		
}
void main(){
	struct student stu[2];
	int index,i;
	input(stu);
	index=compare(stu);
	printf ("The higher score is:\n");
	if (index!=3){
		printf ("%d %s %.2f\n",stu[index].no,stu[index].a,stu[index].score);		
	}
	if (index==3){
		for (i=0;i<2;i++){
			printf ("%d %s %.2f\n",stu[i].no,stu[i].a,stu[i].score);
		}		
	}
	
} */
