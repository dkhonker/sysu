/* ������ֻ�������������籯���ȡ� 2021.04.07*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void graycode(int n, int a[])
{
	if(n == 1)
	{
		a[0] = 0;
		a[1] = 1;
		return ;
	}
	graycode(n-1,a);
	int Max = pow(2,n-1);
	int i = 1;
	while(i <= Max)
	{
		a[2*Max - i] = a[i-1] + Max;
		i++;
	}
 }	
 

 
 /*
	for(int i = 0;i < L;i++)
	{
		a[2*L-i-1] = a[i]+L;
	}
*/

void display(int n,int G[])
{
	int m = 1<<n; 
	int s =0 ;
	int remainder[200];
	int k = 0;
	int a,b,i,j;
	for( s ; s < m; ++s)
	{
		k = 0 ;
		a = G[s];
	
		while(a != 0) 
		{
			b=a/2;
       		k++;
        	remainder[k]=a-b*2;
        	a=a/2;	
		}
		// k����ת��Ϊ�����Ƶ�λ������λ��С��Ҫ���λ��nʱ����ǰ�油0 
		for(j = k; j < n ; j++ ) printf("0");
		//����ö������� 
		for(i=k; i>=1; i--)
		{	
			printf("%d",remainder[i]);
		}
		printf("\n"); 				
	}
}


int main(int argc, char *argv[]) 
{
	
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
