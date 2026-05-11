#include<stdio.h>
#include<stdlib.h>
void main(){
	char ch[]={"Hello world!黄震"};
	//char postion[]={"b1.xlsx"};		用不来哦 
	char postion1[]={"a1.doc"};
	char postion2[]={"b1.doc"};			//doc文件可以操作，docx文件不能操作 
	
//	char postion1[]={"a1.txt"};
//	char postion2[]={"b1.txt"};	
	FILE *fp1,*fp2;					//定义文件指针 fp 
	
	
	if ((fp1=fopen(postion1,"r")) == NULL){
	//if ((fp=fopen("a1.doc","w")) == NULL){				//NULL为空 
		printf ("can not open the file\n");
		exit(0);
	}
	fp2=fopen(postion2,"w");			
	
	//scanf(fp,"%s",&ch);
	fscanf(fp1,"%s",&ch);		//将数据从（键盘、文件）输入
	
	//printf("%s",ch);
	fprintf(fp2,"%s",ch);
	//fprintf(fp1,"%s",ch);		//将数据从(显示器、文件）输出
	
	fclose(fp1);
	fclose(fp2);					//关闭文件 
}

