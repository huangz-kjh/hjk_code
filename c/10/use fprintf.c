#include<stdio.h>
#include<stdlib.h>
struct student{
	int no;
	char name[10];
	float s[3];
	float ave;
};
void save(struct student *p,int *pn){
	int i,n=*pn;
	FILE *fp;
	char filename[10];
	
	printf("现在进入保存当前文件信息到文件处理\n");
	printf("请输入文件名：");
	scanf("%s",filename);
	
	//1.文件打开
	if((fp=fopen(filename,"w"))==NULL){
		printf("无法打开该文件！\n");
		exit(0)	;	
	}
	
	//2.文件的写操作
	fprintf(fp,"当前共有%d个学生;\n",n);
	fprintf(fp,"学号\t姓名\t数学\t英语\t计算机\t平均分\n");
	for(i=0;i<n;i++){
		fprintf(fp,"%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
		p[i].no,p[i].name,p[i].s[0],p[i].s[1],p[i].s[2],p[i].ave);	
	}
	fprintf(fp,"\n");
	printf("输入到文件完毕。\n");
	
	//3.关闭文件
	fclose(fp); 
}
void main(){
	int n;
	scanf("%d",&n);
	struct student stu[n];
	save(stu,&n);
}
