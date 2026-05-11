#include<stdio.h>
union  Categ{
	int clas;
    char position[10]; 
};
struct person{
	int num;
	char name[10];
	char sex;
	char job;
	union  Categ  category;
}person[2];
void main(){
	int i;
	for(i=0;i<2;i++){
		scanf ("%d %s %c %c",&person[i].num,person[i].name,
					&person[i].sex,&person[i].job);
		if(person[i].job == 's')
			scanf("%d",&person[i].category.clas);
		else if(person[i].job=='t')
			scanf("%s",&person[i].category.position);
		else;
	}
	for(i=0;i<2;i++){
		printf ("%d %s %c %c ",person[i].num,person[i].name,
					person[i].sex,person[i].job);
		if(person[i].job=='s')
			printf("%d\n",person[i].category.clas);
		else if(person[i].job=='t')
			printf("%s\n",person[i].category.position);
		else;
	}	
}
/*
#include <stdio.h>
struct person{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int classnum;
        char position[10];
    }category;
}person[2];
int main(){
	int i,n=2;
	for(i=0;i<n;i++) {
		scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);	
		if(person[i].job == 's') scanf("%d",&person[i].category.classnum);
		if(person[i].job == 't') scanf("%s",&person[i].category.position);		
	}
	for(i=0;i<n;i++) {
		if(person[i].job == 's') printf("%d %s %c %c %d\n",person[i].num,&person[i].name,person[i].sex,person[i].job,person[i].category.classnum);	
		if(person[i].job == 't') printf("%d %s %c %c %s\n",person[i].num,&person[i].name,person[i].sex,person[i].job,person[i].category.position);	
	}
	return 0;
} 

*/

