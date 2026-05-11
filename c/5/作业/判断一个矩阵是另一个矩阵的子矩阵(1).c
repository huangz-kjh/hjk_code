#include<stdio.h>
#include<stdlib.h>
int N = 10,M = 10;
//判断 M 是不是 N 的子矩阵		
int zhan_kai (int x,int y,int (*p)[10],int (*q)[10]){
	int  answer = 1;
	for(int n = 0;n < M;n++){
		for(int m = 0;m < M;m++){
			//非子矩阵，跳出 
			if(p[x+n][y+m] != q[n][m]){
				answer = 0;
				break;
			}
		}
		if(answer == 0){
			break;
		}
	}
	return answer;
}
int main(){
	int a[N][N],b[M][M];
	//输入矩阵
	scanf("%d",&N);
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&M);
	for(int i = 0;i < M;i++){
		for(int j = 0;j < M;j++){
			scanf("%d",&b[i][j]);
		}
	}
/*********************************/
	for(int i = 0;i < N - M + 1;i++){		 	//n=5  m=3
		for(int j = 0;j < N - M + 1;j++){
			if(a[i][j] == b[0][0]){
				if(zhan_kai(i,j,a,b) == 1){ 
					printf("%d,%d",i + 1,j + 1);
					exit(0);
				}
			}
		}
	}
	printf("-1");
	return 0;
}
/*  
                          _ooOoo_
                         o8888888o
                         88" . "88
                         (| -_- |)
                          O\ = /O
                      ____/`---'\____
                    .   ' \\| |// `.
                     / \\||| : |||// \
                   / _||||| -:- |||||- \
                     | | \\\ - /// | |
                   | \_| ''\---/'' | |
                    \ .-\__ `-` ___/-. /
                 ___`. .' /--.--\ `. . __
              ."" '< `.___\_<|>_/___.' >'"".
             | | : `- \`.;`\ _ /`;.`/ - ` : | |
               \ \ `-. \_ __\ /__ _/ .-` / /
       ======`-.____`-.___\_____/___.-`____.-'======
                          `=---='

       .............................................
              佛祖保佑                   无BUG
*/ 
