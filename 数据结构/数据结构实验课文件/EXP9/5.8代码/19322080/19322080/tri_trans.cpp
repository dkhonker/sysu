#include<stdio.h>
#include<string.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans() {
	b[0][0] = a[0][1];
	b[0][1] = a[0][0];
	b[0][2] = a[0][2];
	int num[b[0][0]+1];
	int cpot[b[0][0]+1];
	memset(num,0,sizeof(num));
	memset(cpot,0,sizeof(cpot));
	int k=1;
	cpot[1]=1;
	for(int i=1;i<=a[0][2];i++){
		num[a[i][1]]++;
	}
	for(int i=2;i<=a[0][1];i++){
		cpot[i]+=(cpot[i-1]+num[i-1]);
	}
	
	for(int i=1;i<=a[0][2];i++){
		b[cpot[a[i][1]]][0]=a[i][1];
		b[cpot[a[i][1]]][1]=a[i][0];
		b[cpot[a[i][1]]][2]=a[i][2];
		cpot[a[i][1]]++;
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
	for(int i=1;i<=b[0][2];i++){
		if(b[i][0]==x&&b[i][1]==y){
			return b[i][2];
		}
	}
	return 0;


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
