#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

//n为任务数，r表示任务开始最小时刻，p表示任务所需时间单位 
int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess()
{//cnt为所有任务被完成时刻的总和，t是当前时刻，tasknum是剩余待完成的任务数目 
	int cnt = 0, t = 0, tasknum = n;
	while (tasknum) 
	{
		int min = MaxConsume + 1, j = 0;//j表示正在进行的任务下标 
		
		//接下来选择要执行的任务，优先进行剩余时间最少且可开始的任务 
		/*Explain: The following loop finds the task j with the earliest possible finishing time among those who can be processed now.*/
		for (int i = 1; i <=n; i++) 
		{
			if (t >= r[i] && p[i] > 0 && p[i] < min) //第i个任务满足条件，判断是否最少 
			{
				j = i;
				min = p[i];
				//add something here
			}
		}
		/*Explain: The following sentence means that we do task j in the current time unit.*/
		p[j]--; 
		t++;  		
		if (p[j] == 0)// 第j个任务已完成 ，需加上此时的时间 ,并将任务数减少1 
		{	
			cnt = cnt + t;
			tasknum=tasknum-1; 
			//add something here.  
			/*Hint: Update cnt and tasknum below*/ 
		}
	}
	return cnt;
}

int main() 
{
	scanf("%d", &n);//任务数 
	for (int i = 1; i <= n; i++) scanf("%d", &r[i]);//任务开始最小时刻 ，任务下标从1开始 
	for (int i = 1; i <= n; i++) scanf("%d", &p[i]);//任务所需时间单位 
	printf("%d", taskProcess());
	return 0;
}
