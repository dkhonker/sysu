#include<stdio.h>

const int Maxn = 5000;

int a[Maxn + 1][3], a_rpos[Maxn + 1], b[Maxn + 1][3], b_rpos[Maxn + 1], temp[Maxn + 1], Q[Maxn + 1][3];

void tri_multi() {
	if (a[0][1] != b[0][0])return; //

	int k = 1;

	Q[0][0] = a[0][0];
	Q[0][1] = b[0][1];
	Q[0][2] = 0;

	int row = 1, col = 1;

	while(row <= Q[0][0]){
		for (int i =  1; i <= a[0][2]; i++) //Please fill these blank parts
			for (int j =  1; j <= b[0][2]; j++)	{ //Please fill these blank parts
				if(b[j][0] == a[i][1] && b[j][2] != 0){
					if(a[i][0] == row)
						temp[a[i][1]] = a[i][2];
				}
				//please add something here
			}
			
	    for(col = 1; col <= Q[0][1]; col++)
	    {
			for(int j = 0; j <= b[0][2]; j++)
				//please finish the following parts
	  			if (b[j][1] == col && temp[b[j][0]]*b[j][2] != 0)//Please fill this blank part, IF non zero, than save to the three tuple table
	  			{
					Q[k][2] += temp[b[j][0]]*b[j][2]; 
	  				temp[b[j][0]] = 0;
	  				if(Q[k][0] == 0){
	  					Q[k][0] = row;
	  					Q[k][1] = col;
	  					Q[0][2]++;
	  					k++;
					}
     			    //please add something here
	  			}
	    }
			row++;
	}

	//Print out
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
