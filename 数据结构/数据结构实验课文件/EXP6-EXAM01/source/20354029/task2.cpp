#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void graycode(int n, int a[]){ // add something here
if(n==1){a[1]=0;a[2]=1;return;}
graycode(n-1,a);
for(int i=1<<(n-1),j=i;j>0;j--){
	a[2*i-j+1]=a[j]+i;
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

