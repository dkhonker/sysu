/*������������һ��n*n�������ڣ�Ҫ����n���ʺ󣨹������壩��    Ҫ�����������ʺ���ͬһ�С�ͬһ�С�ͬһ���Խ����С�
      �����һ���ʺ��ڸ���(x,y), ��һ���ʺ��ڸ���(x��,y��),
          ����Ҫ��  x != x��  ��  y != y��  ��   x+y != x��+y��    x-y != x��-y����
���룺һ������n��  1<=n<=10.
�����һ������t����ʾ  ����T ��10000 ȡģ�� ��ֵ��(t=T%10000)
����������
   3
�������
   0*/
#include<stdio.h>
int n;int count=0;
int flag=1;
int ans[10][10];
void trial(int i,int n)
{
	if(i>n)count++;
	else{
		 for(int j=1;j<=n;j++){
		 
		 ans[i][j]=1;
		 for(int k=1;k<=i-1;k++){
		 if(ans[k][j]=1)flag=0;
		 if(ans[k][i+j-k]=1)flag=0;
		 if(ans[k][j-i+k])flag=0;
	}
		if(flag)trial(i+1,n);
		
		ans[i][j]=0;
	}
	
}
}
int main()
{
	scanf("%d",&n);
	trial(1,n);
	printf("%d",count);
}
