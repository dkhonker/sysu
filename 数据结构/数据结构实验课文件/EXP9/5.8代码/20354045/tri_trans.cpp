#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans() {
	b[0][0] = a[0][1];	//b行 = a列 数 
	b[0][1] = a[0][0];	//b列 = a行 数 
	b[0][2] = a[0][2];	//值个数相同 
	int k = 1;

	for (int i = 1; i <= a[0][1]; i++)	//i<=a.j i为b的行 对应 a的列 
		for (int j = 1; j <= a[0][2]; j++)	//j<=a.v j为b的值的个数 也就是表格的第j行 
	       //please add something here
			{
				b[j][0] = a[j][1];
				b[j][1] = a[j][0];
				b[j][2] = a[j][2];
			}
	for(int n = 1;n < a[0][2]; n++)
	{	
		for(k =1;k<a[0][2];k++)
		{
			if(b[k][0]>b[k+1][0])
			{
				int t,p,q;
				t = b[k][0];
				b[k][0] = b[k+1][0];
				b[k+1][0] = t;
				p = b[k][1];
				b[k][1] = b[k+1][1];
				b[k+1][1] = p;
				q = b[k][2];
				b[k][2] = b[k+1][2];
				b[k+1][2] = q;
			}
			else if(b[k][0] == b[k+1][0])
			{
				if(b[k][1]>b[k+1][1])
				{
					int t,q;
					t = b[k][1];
					b[k][1] = b[k+1][1];
					b[k+1][1] = t;
					q = b[k][2];
					b[k][2] = b[k+1][2];
					b[k+1][2] = q;
				}
			}
		}
	}
	


	for (int i = 0; i <= b[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}

int tri_pos(int x,int y) {

//please finish this function
	for(int i = 1;i <= a[0][2];i++)
	{
		if(b[i][0]==x&&b[i][1]==y)
		{
			printf("%d",b[i][2]);
		}
	}
}


int main() {
	for (int j = 0; j <= 2; j++)
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);
	tri_trans();

	int x , y;
	scanf("%d %d",&x,&y);
	printf("%d",tri_pos(x,y));
	return 0;
}
