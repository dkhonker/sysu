#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int task[n];//任务开始时间 
	int time[n];//任务完成所需时间 
	int sumtime[n]={0};//任务完成时刻 
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
	}//对任务开始时间进行从小到大的排序 
	int current=task[0];
	int k=0;
	while(1)//循环终止条件为所有任务完成所需的时间都是0 
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
		if(current>=task[i]&&time[i]<min&&time[i]>0)//找到满足时间开始条件下耗时最少的任务 
		{
		judge=1;
		min=time[i];
		p=&time[i];
	    }
	    if(judge==0) {current+=1;continue;}                                          //有可能存在没有的情况 也就是任务断层 
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
