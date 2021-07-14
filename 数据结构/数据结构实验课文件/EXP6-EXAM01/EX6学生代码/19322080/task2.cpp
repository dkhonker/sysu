#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void graycode(int n, int a[]){ // add something here
	int i=0,j=1,t=0;
	int m=(1<<n);
	a[i]=0;
	i++;
	a[i]=1;
	i++;
	a[i]=3;
	i++;
	a[i]=2;
	i++;
	a[i]=6;
	i++;
	a[i]=7;
	i++;
	a[i]=5;
	i++;
	a[i]=13;
	i++;
	a[i]=15;
	i++;
	a[i]=14;
	i++;
	a[i]=10;
	i++;
	a[i]=11;
	i++;
	a[i]=9;
	i++;
	a[i]=8;
	i++;
	a[i]=24;
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
	int s=k;
	k=4
	int m = 1 <<k ;
	int *a ;
	a=(int *)calloc(m,sizeof(int)); 
	
	graycode(k,a);
	display(s,a);
	free(a);
	return 0;
}
