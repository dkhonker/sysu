#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans() {
	b[0][0] = a[0][1];
	b[0][1] = a[0][0];
	b[0][2] = a[0][2];
	int k = 1;

	for (int i = 1; i <= a[0][1]; i++)
		for (int j = 1; j <= a[0][2]; j++)
		if(i==a[j][1])
		{
		
		b[k][0]=a[j][1];
		b[k][1]=a[j][0];
		b[k][2]=a[j][2];
		k++;
		
	    }
		
	       //please add something here




	for (int i = 0; i <= b[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}

int tri_pos(int x,int y) {
for(int k=1;k<=b[0][2];k++)
 if(b[k][0]==x&&b[k][1]==y)
 return b[k][2];
//please finish this function


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
