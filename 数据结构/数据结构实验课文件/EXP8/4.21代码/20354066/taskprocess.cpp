#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int task[n];//����ʼʱ�� 
	int time[n];//�����������ʱ�� 
	int sumtime[n]={0};//�������ʱ�� 
	for(int i=0;i<n;i++)
	scanf("%d",&task[i]);
	for(int i=0;i<n;i++)
	scanf("%d",&time[i]);
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(task[i]>task[j])
	{
		int temp=time[i];
		time[i]=time[j];
		time[j]=temp;
		temp=task[i];
		task[i]=task[j];
		task[j]=temp;
	}//������ʼʱ����д�С��������� 
	int current=task[0];
	int k=0;
	while(1)//ѭ����ֹ����Ϊ����������������ʱ�䶼��0 
	{
		int flag=0;
		for(int i=0;i<n;i++)
		if (time[i]!=0)
		flag++;
		if(flag==0)
		break;
		int min=10000;
		int *p;
		int judge=0;
		for(int i=0;i<n;i++)
		if(current>=task[i]&&time[i]<min&&time[i]>0)//�ҵ�����ʱ�俪ʼ�����º�ʱ���ٵ����� 
		{
		judge=1;
		min=time[i];
		p=&time[i];
	    }
	    if(judge==0) {current+=1;continue;}                                          //�п��ܴ���û�е���� Ҳ��������ϲ� 
		current+=1;
		*p-=1;
		if(*p==0)
		sumtime[k++]=current;
	}
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=sumtime[i];
	printf("%d",sum); 
	return 0;
}
