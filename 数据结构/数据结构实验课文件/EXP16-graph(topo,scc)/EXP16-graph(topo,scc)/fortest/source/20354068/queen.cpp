#include<stdio.h>
int n,count;
int queen[11];
void Trial(int i, int n){
	if(i>n)
	    count++;
	else{
		for(int j = 1;j<=n;j++)
		{
			queen[i] = j;
			int flag = 0;
			for(int k = 1;k<i&&flag==0;k++)
			    if(queen[k]==j||(k+queen[k])==(i+j)||(k-queen[k])==(i-j)) flag = 1;
			if(flag==0) Trial(i+1, n);
			queen[i] = 0;
		}
	}
}
int main()
{
	scanf("%d",&n);
	Trial(1, n);
	printf("%d",count%10000);
}
