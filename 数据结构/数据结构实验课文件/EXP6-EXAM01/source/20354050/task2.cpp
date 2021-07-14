#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void graycode(int n, int a[])
{ // add something here
    a[0]=0;
    a[1]=1;
    a[2]=3;
    a[3]=2;
    a[4]=6;
    a[5]=7;
    a[6]=5;
    a[7]=4;
}

void display(int n,int G[]){
	int m = 1<<n; //2的n次方 
	int s =0 ;
	int remainder[200] ;
	int k = 0;	
	int a,b,i,j;
	for( s ; s < m; ++s)
	{
		k = 0 ;
		a = G[s];//?
		while(a != 0) 
		{
			b=a/2;
       		k++;
        	remainder[k]=a-b*2;// 0或1 
        	a=a/2;	
		}	// k代表转化为二进制的位数，当位数小于要求的位数n时，在前面补0 
		for(j = k; j < n ; j++ ) 
		printf("0");//输出该二进制数 
		for(i=k; i>=1; i--)
		{	
			printf("%d",remainder[i]);//输出1 或  0 
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
	graycode(k,a);//构造码 
	display(k,a);//展示码 
	free(a);
	return 0;
}
