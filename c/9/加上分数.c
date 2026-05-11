//定义一个含姓名、年龄、英语成绩的结构体类型，通过键盘输入5个学生的信息，
//再对年龄大于18岁的学生的英语成绩加上10分，然后分别输出成绩变化之前和之后的所有学生的信息。
#include<stdio.h>
struct info{
	char name[10];
	int age,score;
};
void input(struct info *p){
	int i;
	for (i=0; i<5; i++){
		scanf ("%s%d%d",p[i].name,&p[i].age,&p[i].score);
	}	
}
void output(struct info *p){
	int i;
	for (i=0; i<5; i++){
		printf ("%s  %d  %d\n",p[i].name,p[i].age,p[i].score);
	}	
}
void main(){
	struct info student[5];
	printf ("请输入5名学生信息：\n");
	printf ("姓名  年龄  成绩\n");
	input(student);
	output(student);
}
