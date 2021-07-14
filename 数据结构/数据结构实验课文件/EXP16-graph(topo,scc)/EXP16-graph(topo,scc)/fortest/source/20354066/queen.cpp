#include<stdio.h>
#define maxn 10
int arr[maxn+1][maxn+1];
int T;
int n;
bool istrue(int i,int j)//默认前i-1行已经合法 
{
	int judge[maxn];
	for(int i1=1;i1<i;i1++)
	for(int j1=1;j1<=n;j1++)
	if(arr[i1][j1]==1)
	{
	judge[i1]=j1;
	break;
    }
	for(int k=1;k<=i-1;k++)
	if(judge[k]==j||k+judge[k]==i+j||k-judge[k]==i-j)
	return false;
	return true;
}
void Trail(int i,int n)
{
	if(i>n)T++;
	else
	{
		for(int j=1;j<=n;j++)
		{
			arr[i][j]=1;
			if(istrue(i,j))
			Trail(i+1,n);
			arr[i][j]=0;
		}
	}
}
int main()
{
	scanf("%d",&n);
	Trail(1,n);
	printf("%d",T%10000);
	return 0;
}
