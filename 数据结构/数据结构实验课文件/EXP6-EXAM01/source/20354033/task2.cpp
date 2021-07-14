#include <stdio.h>
#include <stdlib.h>
int n;
char s[100];
void dfs(int i)
{
 if(i==n) printf("%s\n",s); //到达底部就输出
else
 {
 dfs(i+1); //深度优先搜索
if(s[i]=='0') s[i]='1';
 else s[i]='0'; //把当前位逆转
dfs(i+1); //继续向下搜索
}
}
int main()
{
 int i;
 while(1)
 {
 scanf("%d",&n);
 if(!n) break;
 for(i=0;i<17;i++) s[i]='0';
 s[n]='\0';
 dfs(0);
 printf("\n");
 }
 system("pause");
 return 0;
} 

