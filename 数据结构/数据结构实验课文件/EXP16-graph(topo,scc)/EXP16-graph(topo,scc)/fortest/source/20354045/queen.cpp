#include<stdio.h>
#include<math.h>
const int maxn = 10;
int Q[maxn+1];
int n;
int count=0;

bool is_ok(int i){
    for(int j=0;j!=i;j++)
	{
        if(Q[i]==Q[j] || i-Q[i]==j-Q[j] || i+Q[i]==j+Q[j])
            return false;
        }
    return true;
}
     
void Trial(int i){
    //进入本函数时，在n*n的棋盘前（i-1）行，已经放置了满足约束条件的（i-1）个棋子
  	//现在从第i行继续为后续棋子选择合适位置
	//当i>n时，求得一个合法布局，输出
	if(i == n)//输出棋盘的当前布局
		count++;
	else{
		for(int j=0;j!=n;j++)
		{
		//在第i行j列放置一个棋子;
		Q[i] = j;
		if(is_ok(i))//当前布局合法 
		{
			Trial(i+1);
			//移走第i行第j列的棋子;
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	Trial(0);
	printf("%d",count%10000);
}
