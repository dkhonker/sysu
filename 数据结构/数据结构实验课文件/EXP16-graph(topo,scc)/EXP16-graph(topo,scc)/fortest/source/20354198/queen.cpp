#include<stdio.h>
int t,T=0,n;
int S[11][11];



void Trial(int i)
{
	if(i>n) 
	{
		T++;
		return;
	}
	for(int j=1;j<=n;j++)
	{
		S[i][j]=1;
		bool flag=true;
		for(int x=i-1;x>=1;x--)
			if(S[x][j]==1||S[i-x][j-x]==1||S[i-x][j+x]==1) 
			{
				flag=false;
				break;
			}
		if(flag) Trial(i+1);
		S[i][j]=0;
	}
}

int main()
{
	scanf("%d",&n);
	Trial(1);
	t=T%10000;
	printf("%d",t);
}
