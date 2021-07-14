#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
char inputfilename[12] = "0.in";
char outputfilename[12] = "0.out";
FILE * fin;
FILE * fout;

int a[300000000];

void graycode(int n, int a[]){
 	if(n==1){
 		a[0]=0; a[1]=1;
 		return;
	 }
	 graycode(n-1,a);
	 int L = 1<<(n-1);   // 得到2^(n-1)
	 int i = 0;
	 for (i ; i < L; i++)  a[L + L - i - 1] = a[i] + L;
 }




void foutlist(int n,int G[],char* outputfilename){
	int m = 1<<n; 
	int s =0 ;
	int remainder[200] ;
	int k = 0;
	int j = 0;
	int a,b,i;
	fout = fopen(outputfilename, "w");
	
	for( s ; s < m; ++s){
		a = G[s];
		k=0 ;
		//十进制转化位二进制 
		while(a != 0) 
		{
			b=a/2;
        	k++;
       		remainder[k]=a-b*2;
        	a=a/2;	
		}
		// k代表转化为二进制的位数，当位数小于要求的位数n时，在前面补0 
		for(j = k; j < n ; j++ ) fprintf(fout,"0");
		//输出该二进制数 
		for(i=k; i>=1; i--)
		{	
			fprintf(fout,"%d",remainder[i]);
		}
		fprintf(fout,"\n");				 
	}
	fclose(fout);
}


void fink(char* inputfilename, int k){
	fin = fopen(inputfilename, "w");
	fprintf(fin,"%d\n",k);
	fclose(fin);
}



int main(int argc, char *argv[]) {
	
	int k = 0;
	int i =0;
			
	for(i; i < 10; i++){
		inputfilename[0] = '0' + i;
        outputfilename[0] = '0' + i;
        scanf("%d", &k); getchar();
        fink(inputfilename,k);
        graycode(k,a);
        foutlist(k,a,outputfilename);
	}
	return 0;
}

