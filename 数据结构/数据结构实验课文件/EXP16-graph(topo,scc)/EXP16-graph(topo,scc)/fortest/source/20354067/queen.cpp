/*问题描述：在一个n*n的棋盘内，要放入n个皇后（国际象棋）。    要求任意两个皇后不在同一行、同一列、同一个对角线中。
      （如果一个皇后在格子(x,y), 另一个皇后在格子(x’,y’),
          我们要求  x != x’  且  y != y’  且   x+y != x’+y’    x-y != x’-y’。
输入：一个整数n。  1<=n<=10.
输出：一个整数t，表示  解数T 对10000 取模后 的值。(t=T%10000)
输入样例：
   3
输出样例
   0*/
#include<stdio.h>
int n;int count=0;
int flag=1;
int ans[10][10];
void trial(int i,int n)
{
	if(i>n)count++;
	else{
		 for(int j=1;j<=n;j++){
		 
		 ans[i][j]=1;
		 for(int k=1;k<=i-1;k++){
		 if(ans[k][j]=1)flag=0;
		 if(ans[k][i+j-k]=1)flag=0;
		 if(ans[k][j-i+k])flag=0;
	}
		if(flag)trial(i+1,n);
		
		ans[i][j]=0;
	}
	
}
}
int main()
{
	scanf("%d",&n);
	trial(1,n);
	printf("%d",count);
}
