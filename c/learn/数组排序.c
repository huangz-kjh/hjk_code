#include<stdio.h>
#include<string.h>
#define N 10
struct student{
	char name[20];
	int num;
	int score;
};
input(struct student *p){
	int i;
	for(i=0;i<N;i++)
		scanf("%s%d%d",p[i].name,&p[i].num,&p[i].score);
}
output(struct student *p){
	int i;
	for(i=0;i<N;i++)
		printf("%s\t%d\t%d\n",p[i].name,p[i].num,p[i].score);
}
exchange(struct student *s1,struct student * s2){
	int temp;
	char ch[20];
	
	strcpy(ch,s1->name);
	strcpy(s1->name,s2->name);
	strcpy(s2->name,ch);
	
	temp=s1->num;
	s1->num=s2->num;
	s2->num=temp;
	
	temp=s1->score;
	s1->score=s2->score;
	s2->score=temp;
}
void main(){
	struct student stu[10];
	int i,j,index;
	input(stu);
	for (i=0;i<N-1;i++){
		for (j=i;j<N;j++)
			if (stu[i].score>stu[j].score)
				index=j;
		if(index!=i)
			exchange(&stu[i],&stu[index]);
	}
	output(stu);
 }
