#include<stdio.h>
#include <stdlib.h>

const int N=401;
int Map[N][N];
char filename[10] = "0.in";

int gendata(int k, int N){
	FILE* fout = fopen(filename, "w");
	fprintf(fout,"%d\n",k);
	int n;
	for(int m=1;m<=k;m++){
	    n=rand()%N+2;
	    fprintf(fout,"%d\n",n);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) Map[i][j]=0;
				else
					if(m%2!=0) Map[i][j]=Map[j][i]=(i+j)%2;
					else Map[i][j]=Map[j][i]=rand()%2;
			}
		}
		for(int i=1;i<=n;i++){
			fprintf(fout,"%d",Map[i][1]);
			for(int j=2;j<=n;j++)
				fprintf(fout," %d",Map[i][j]);
			fprintf(fout,"\n");
		}
	}
	fclose(fout); 
}
int main(){
	srand(0);
	for(int t=0;t<10;t++){
		printf("producing %d...\n", t);
		filename[0] = '0' + t;
		if(t<=3)  gendata(rand()%5 + 5, 9);
		else  gendata(rand()%10 + 10, 397);
	}
	return 0; 
}

