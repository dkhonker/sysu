#include<stdio.h>
const int maxn = 10;
int count = 0,c[maxn+1],d[2*maxn+1],e[2*maxn+1];

void Trial(int i,int n){  
     //进入本函数时，在n*n的棋盘前（i-1）行，已经放置了满足约束条件的（i-1）个棋子  
     //现在从第 i 行继续为后续棋子选择合适位置  
     //当 i>n 时，求得一个合法布局，输出.
     if(i > n) count++;     //n为4就是4皇后问题  
     else{  
         for(int j=1;j<=n;++j){
            if(!c[j]&!d[i+j]&!e[j-i+n]) {
			c[j]=1;
			d[i+j]=1;
			e[j+n]=1;
			Trial(i+1,n);}
			
            c[j]=d[i+j]=e[j-i+n]=0;  
        }
    }
}



int main(){
	int n;
	scanf("%d",&n);
	Trial(1,n);
	printf("%d",count%10000);
	return 0;
}
