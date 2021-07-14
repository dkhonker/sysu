#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], b[Maxn + 1][3];

void tri_trans() {
	b[0][0] = a[0][1];
	b[0][1] = a[0][0];
	b[0][2] = a[0][2];
	int trans_row = a[0][1];
	int trans_column = a[0][0];
	int num[trans_row];
	int cpot[trans_row];
	for(int i=0;i<trans_row;i++)
	{
		num[i] = 0;
		cpot[i] = 0;
	}
	cpot[0] = 1;
	
	for(int i=1;i<=a[0][2];i++) num[a[i][1]-1]++;  //a[i][1] is column
	for(int i=1;i<trans_row;i++) cpot[i] = cpot[i-1] + num[i-1];
	
	/*printf("num[]\n");
	for(int i=0;i<trans_row;i++) printf("%d ",num[i]);
	printf("\ncpot[]\n");
	for(int i=0;i<trans_row;i++) printf("%d ",cpot[i]);*/
	
	for(int i=1;i<=a[0][2];i++)
	{
		int a_column = a[i][1];
		int position = cpot[a_column-1];
		//printf("position: %d\n",position);
		cpot[a_column-1]++;
		b[position][0] = a[i][1];
		b[position][1] = a[i][0];
		b[position][2] = a[i][2];
	}
	
    for (int i = 0; i <= b[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}

int tri_pos(int x,int y) {

    for(int i=0;i<=b[0][2];i++)
    {
    	if(b[i][0]==x && b[i][1]==y )
    	{
    		return b[i][2];
		}
	}
	return 0;



}


int main() {
	for (int j = 0; j <= 2; j++)
		scanf("%d", &a[0][j]);  // ¾ØÕóÊôÐÔ 
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)  // ¾ØÕóÔªËØ 
			scanf("%d", &a[i][j]);
	tri_trans();

	int x , y;
	scanf("%d %d",&x,&y);
	printf("%d",tri_pos(x,y));
	return 0;
}
