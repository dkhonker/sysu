#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int k;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define change(x) x=(x=='0')?'1':'0'
void graycode(int n, int a[]){ // add something here
	for(int i=0;i<sizeof(a);i++)
{
	
  	a[i]='0';
  	printf("%c",a[i]);
}
	printf("\n");
	int flag = 1;
  	while(1){
  		if(flag)
  		{
  			change(a[k-1]);
		  }
		else{
			int i;
			for (i=k-1;i>=0&&a[i]=='0';i--);
                if (i==0)
                {
				break;
                }
                change(a[i-1]);}
	for (int i=0;i<k;i++)
 	{
		printf("%c",a[i]);
	}
	printf("\n");
	flag=abs(flag-1);
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



int main(int argc, char *argv[]) {
	
	scanf("%d", &k); getchar();	
	
	int m = 1 <<k ;
	int *a ;
	a=(int *)calloc(m,sizeof(int)); 
	
	graycode(k,a);
	display(k,a);
	free(a);
	return 0;
}
