#include<stdio.h>
int n;//���ݸ��� 
int m;//�ж��� 
int r;//�ж�ʱ��¼��ֵλ�� 
int temp1;//�ж�ʱ������ 
int temp2;//ÿ���жϽ�����󽻻��� 
int a[10001]; 
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);//�������� 
	
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
