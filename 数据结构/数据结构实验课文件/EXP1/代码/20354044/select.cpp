
#include<stdio.h>
int n;
int a[10001];
int main()
{
    int i=1;

	printf("��������Ԫ�ظ���\n");
	scanf("%d",&n);
	printf("���������ÿ��Ԫ��\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	for(i=1;i<=n;i++)
	printf("%d",a[i]);
	return 0;
}
