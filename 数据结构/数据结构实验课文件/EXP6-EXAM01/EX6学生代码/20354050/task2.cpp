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
	int m = 1<<n; //2��n�η� 
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
        	remainder[k]=a-b*2;// 0��1 
        	a=a/2;	
		}	// k����ת��Ϊ�����Ƶ�λ������λ��С��Ҫ���λ��nʱ����ǰ�油0 
		for(j = k; j < n ; j++ ) 
		printf("0");//����ö������� 
		for(i=k; i>=1; i--)
		{	
			printf("%d",remainder[i]);//���1 ��  0 
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
	graycode(k,a);//������ 
	display(k,a);//չʾ�� 
	free(a);
	return 0;
}
