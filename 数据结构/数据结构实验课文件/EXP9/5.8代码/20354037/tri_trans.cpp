#include<stdio.h>
#include<cstring>
const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans(int x,int y) {
	b[0][0] = a[0][1];
	b[0][1] = a[0][0];
	b[0][2] = a[0][2];
	int k = 1;
	int row1 = a[0][2],col1 = a[0][2];
	int num[col1+1],cpot[col1];
	memset(num,0,sizeof(num));
	memset(cpot,0,sizeof(cpot));
	for (int i = 1; i <= a[0][2]; i++)
	{
		num[a[i][1]]++;
	}

	
	for(int i = 1;i<= a[0][2];i++)
	{
		if(i == 1) cpot[i] = 1;
		else
		{
			cpot[i] = cpot[i-1]+num[i-1];
		}
	}
	
	for(int i = 1;i<=a[0][2];i++)
	{
		int x = a[i][1];
		int index = cpot[x];
		b[index][0] = a[i][1];
		b[index][1] = a[i][0];
		b[index][2] = a[i][2];
		cpot[x]++;
	}
	
	for(int i = 0;i<=b[0][2];i++)
	{
		for(int j = 0;j<=2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	//ÖØÖÃcpotº¯Êý 
	for(int i = 1;i<= a[0][2];i++)
	{
		if(i == 1) cpot[i] = 1;
		else
		{
			cpot[i] = cpot[i-1]+num[i-1];
		}
	}
	for(int i=1;i<=b[0][1];i++)
	{
		int index = cpot[x];
		if(b[index][1]==y) 
		{
			printf("%d",b[index][2]);
			break;
		}
	}
	
	
}

int main() {
	for (int j = 0; j <= 2; j++)
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);
	int x , y;
	scanf("%d%d",&x,&y);
	tri_trans(x,y);
	return 0;
}
