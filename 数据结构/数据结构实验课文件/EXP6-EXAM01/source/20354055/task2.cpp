#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void graycode(int n, int a[]){
void dfs(int i){
	if(i==n)printf("%s\n",s);
	else{
		dfs(i+1);
		if(s[i]=='0')s[i]='1';
		else s[i]='0';
		dis(i+1)
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
