#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans() {
	b[0][0] = a[0][1];
	b[0][1] = a[0][0];//行列互换 
	b[0][2] = a[0][2];
	int k = 1;

	for (int i = 1; i <= a[0][1]; i++)//a列维数 =b行维数 
		for (int j = 1; j <= a[0][2]; j++)//非零元素个数 
	    
       {b[j][0]=a[j][1];
       b[j][1]=a[j][0];
       b[j][2]=a[j][2];
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
for(int i=1;i<=b[0][1];i++){
	for(int j=1;j<=b[0][2];j++){
		if(x==b[j][0]&&y==b[j][1])
		return b[j][2];
	}
}
return -1;
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
