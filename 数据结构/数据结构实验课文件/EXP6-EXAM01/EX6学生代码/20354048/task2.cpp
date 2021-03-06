#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mult2(int a)
{
	int i,result=1;
	for(i=0;i<a;i++)
	{
		result=2*result;
	}
	return result;
}
void graycode(int n, int a[]){ // add something here
	int i=0,j=2,nn,mm,k,cur,temp;
	a[0]=0;
	a[1]=1;
	for(i=2;i<=n;i++)
	{
		a[j]=a[j-1]+mult2(i-1);
		cur=a[j];
		j++;
		nn=1<<i;
		mm=1<<(i-1);
		for(k=1;j<=nn-mm;j++,k++){
			a[j]=cur+a[k];
		}	
		a[j]=a[j-1]-mult2(i-2);
		j++;
		for(;j<=nn;j++,k++)
		{
			a[j]=cur+a[k];
		}
	}		
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
