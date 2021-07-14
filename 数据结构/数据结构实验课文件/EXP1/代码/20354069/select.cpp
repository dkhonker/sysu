#include<stdio.h>
int n;//数据个数 
int m;//判断用 
int r;//判断时记录数值位置 
int temp1;//判断时交换用 
int temp2;//每轮判断结束最后交换用 
int a[10001]; 
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);//输入数据 
	
	for(int i=0;i<n;i++)
	{
	 r=i;
	 m=a[i];
	 for(int j=i+1;j<n;j++)
	 {
	  if(m>a[j])
	  {
	  r=j;
	  m=a[j];
	  }
     }
     temp2=a[i];
     a[i]=a[r];
     a[r]=temp2;
	}
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	return 0;
 } 
