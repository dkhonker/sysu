#include<stdio.h>
const int maxn = 10;
int count = 0,c[maxn+1],d[2*maxn+1],e[2*maxn+1];

void Trial(int i,int n){  
     //���뱾����ʱ����n*n������ǰ��i-1���У��Ѿ�����������Լ�������ģ�i-1��������  
     //���ڴӵ� i �м���Ϊ��������ѡ�����λ��  
     //�� i>n ʱ�����һ���Ϸ����֣����.
     if(i > n) count++;     //nΪ4����4�ʺ�����  
     else{  
         for(int j=1;j<=n;++j){
            if(!c[j]&!d[i+j]&!e[j-i+n]) {
			c[j]=1;
			d[i+j]=1;
			e[j+n]=1;
			Trial(i+1,n);}
			
            c[j]=d[i+j]=e[j-i+n]=0;  
        }
    }
}



int main(){
	int n;
	scanf("%d",&n);
	Trial(1,n);
	printf("%d",count%10000);
	return 0;
}
