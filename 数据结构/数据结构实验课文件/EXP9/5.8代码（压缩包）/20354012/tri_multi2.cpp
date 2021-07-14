#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], a_rpos[Maxn + 1], b[Maxn + 1][3], b_rpos[Maxn + 1], temp[Maxn + 1], Q[Maxn + 1][3],q[Maxn + 1][Maxn + 1];

void tri_multi() {
	if (a[0][1] != b[0][0])return; //

	Q[0][0] = a[0][0];
	Q[0][1] = b[0][1];
	Q[0][2] = 0;

	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 1; j <= b[0][2]; j++)
		{
			if(a[i][1]==b[j][0])
				{
					q[a[i][0]][b[j][1]]+=a[i][2]*b[j][2];
				}
		}
	
	for (int i = 1; i <= Q[0][0]; i++){
		for (int j = 1; j <= Q[0][1]; j++)
	    {
	    	if(q[i][j]!=0)
	    	{
	    		Q[0][2]++;
	    		Q[Q[0][2]][0]=i;
	    		Q[Q[0][2]][1]=j;
	    		Q[Q[0][2]][2]=q[i][j];
			}
		}
	} 
	for (int i = 0; i <= Q[0][2]; i++)
	{
		for (int j = 0; j <= 2; j++)
			printf("%d ", Q[i][j]);
		printf("\n");
	}
}


int main() {
	for (int j = 0; j <= 2; j++)
		scanf("%d", &a[0][j]);
	for (int i = 1; i <= a[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &a[i][j]);
	int sign = 1, k = 1;
	while(k <= a[0][2])
	{
		if (a[k][0] == sign){
			a_rpos[sign++] = k;
			k++;
		}
		else if(a[k][0] < sign){
			k++;
		}
		else{
			a_rpos[sign++] = k;
			a_rpos[sign++] = k;
		}
	}
	a_rpos[sign] = a[0][2] + 1;
	getchar();

	for (int j = 0; j <= 2; j++)
		scanf("%d", &b[0][j]);
	for (int i = 1; i <= b[0][2]; i++)
		for (int j = 0; j <= 2; j++)
			scanf("%d", &b[i][j]);

	sign = 1, k = 1;
	while(k <= b[0][2])
	{
		if (b[k][0] == sign){
			b_rpos[sign++] = k;
			k++;
		}
		else if(b[k][0] < sign){
			k++;
		}
		else{
			b_rpos[sign++] = k;
			b_rpos[sign++] = k;
		}
	}
  	b_rpos[sign] = b[0][2] + 1;

	tri_multi();
	return 0;
}
