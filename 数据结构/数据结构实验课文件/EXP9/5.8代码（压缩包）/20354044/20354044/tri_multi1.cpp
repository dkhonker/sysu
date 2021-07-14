#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3], Q[Maxn + 1][3] ,q[Maxn + 1][Maxn + 1]={0};

void tri_multi() {int k=1;
	if (a[0][1] != b[0][0])return; //

	Q[0][0] = a[0][0];
	Q[0][1] = b[0][1];
	Q[0][2] = 0;

	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 1; j <= b[0][2]; j++)//未压缩 
			//please add something here
			//multiply two matrixes
			{
				if(a[i][1]==b[j][0]){
					q[a[i][0]][b[j][1]]+=a[i][2]*b[j][2];
				}
			}


	for (int i = 1; i <= Q[0][0]; i++){
		for (int j = 1; j <= Q[0][1]; j++)
			printf("%d ",q[i][j]);
		printf("\n");
	}

	for (int i = 1; i <= Q[0][0]; i++){
		for (int j = 1; j <= Q[0][1]; j++){
		
	    //please add something here
			//reform it to a three tuple table
if(q[i][j]!=0){
	//printf("k=%d",k);
	Q[k][0]=i;
	Q[k][1]=j;
	Q[k][2]=q[i][j];
	//printf("%d",Q[k][2]);
	Q[0][2]++;
	k++;
}}
	}

	for (int i = 0; i <= Q[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", Q[i][j]);
		printf("\n");
	}
}

int main() {
	for (int j = 0; j <= 2; j++)//第一行有3个整数存放矩阵行列维数和非零元个数
 
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)// 输入三元组稀疏矩阵（整数）；

		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);
	getchar();

	for (int j = 0; j <= 2; j++)
		scanf("%d", &b[0][j]);
	for (int i = 1; i <= b[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &b[i][j]);

	tri_multi();
	return 0;
}
