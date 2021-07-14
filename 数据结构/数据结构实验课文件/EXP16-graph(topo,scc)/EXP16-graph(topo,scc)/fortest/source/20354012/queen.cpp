#include<stdio.h>
const int maxn=10;
int n,T;
bool col[maxn+1],dp[maxn*2+1],dm[maxn*2+1]; 
void queen(int row)
{
	for(int i =1;i<=n;i++)
	if(!col[i]&&!dp[i+row]&&!dm[i-row+n])
	{
		col[i]=dp[i+row]=dm[i-row+n]=true;
		if(row<n) queen(row+1);
		else T++;
		col[i]=dp[i+row]=dm[i-row+n]=false;
	}
 } 
 int main()
 {
 	scanf("%d",&n);
 	queen(1);
 	printf("%d",T%10000);
 }
