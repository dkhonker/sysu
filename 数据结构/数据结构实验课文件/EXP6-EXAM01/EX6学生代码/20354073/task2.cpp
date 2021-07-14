#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void graycode(int n, int a[]){
    int b=2^n-1;
	a[0]=0;
	a[1]=1; 
    for(int i=1;i<=b;i++)
    {
    	if(i%2!=0)
    	{
    		if(a[i]%2==0)
    		{
			 a[i]=a[i-1]+1;
		    }
		    if(a[i]%2==1)
		    {
		     a[i]=a[i-1]-1;	
			} 
		}
		else if(i%2==0)
		{
			for(int j=n;j>=0;j--)
			{
				if(a[i-1]%(2^j)==0 && (a[i-1]-2^j)%(2^(j+2)!=0))
				{
					a[i]=a[i-1]-2^(j+1);
					break;
				}
				if(a[i-1]%(2^j)==0 && (a[i-1]-2^j)%(2^(j+2)==0))
				{
					a[i]=a[i-1]+2^(j+1);
					break;
				}
			}
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
