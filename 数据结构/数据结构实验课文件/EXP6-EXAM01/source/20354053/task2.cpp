#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int N=10;
void graycode(int n, int a[]){
	int b[N*N][N],q;
	int arr=pow(2,n);
	if(n==0){
		b[0][0]=0;
		b[1][0]=1;
		a[0]=b[0][0];
		a[1]=b[1][0];
		return;
	}
	if(n>1){
		for(int i=0;i<arr/2;i++){
			b[i][n-1]=0;
			b[arr-i-1][n-1]=1;
		}
	}
	graycode(n-1,a);
	for(int i=arr/2;i<arr;i++){
		for(int j=0;j<n-1;j++){
			b[i][j]=b[arr-i-1][j];
		}
	}
	for(int i=0;i<arr;i++){
		int sum=0;
		for(int j=0;j<=n+1;j++){
			q=b[i][j]*pow(10,j+1);
			sum=sum+q;
		}
		a[i]=sum;
	}
 // add something here
 }


void display(int n,int G[]){
	int m = 1<<n; 
	int s =0 ;
	int remainder[200] ;
	int k = 0;	
	int a,b,i,j;
	for( s ; s < m; ++s){
		k = 0 ;
		a = G[s];
		while(a != 0) 
		{
			b=a/2;
       		k++;
        	remainder[k]=a-b*2;
        	a=a/2;	
		}
		// k代表转化为二进制的位数，当位数小于要求的位数n时，在前面补0 
		for(j = k; j < n ; j++ ) printf("0");
		//输出该二进制数 
		for(i=k; i>=1; i--)
		{	
			printf("%d",remainder[i]);
		}
		printf("\n"); 				
	}
}



int main(int argc, char *argv[]) {
	
	int k ;
	scanf("%d", &k); getchar();	
	int m = 1 <<k ;
	int *a ;
	a=(int *)calloc(m,sizeof(int)); 
	graycode(k,a);
	display(k,a);
	free(a);
	return 0;
}
