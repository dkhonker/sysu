#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];//n个任务，任务i时刻r[i]后才可开始,且完成所需时间为p[i] 

int taskProcess() 
{
	int cnt = 0, t = 0, tasknum = n; 	//cnt为各ti之和即所求量，t为时间，tasknum为任务数量 
	while (tasknum) //还有任务 
	{
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) //第i项任务
		{	int minindex;
			if (t >= r[i] && p[i] > 0 && p[i] < min)//任务可开始并且还未完成.p[i] < min用于寻找剩余工作量最小的任务 
			 {
				//add something here
				min = p[i];			//min为剩余工作量最小的任务 
				minindex = i;		//其下标记为minindex 
			}
			j = minindex;			//令j = minindex 
		}  
		
		p[j]--; t++;  //process task j in the current time unit. 以每小时来计算，工作量最小的任务时间-1 当前时间+1 
		if (p[j] == 0)	//完成一个任务后 
		{	
			//add something here.  
			cnt = cnt + t;		//ti之和更新ti 
			tasknum--;			//任务数量-1 
			//Hint: Update cnt and tasknum
		}
	}
	return cnt;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &r[i]);
	for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
	printf("%d", taskProcess());
	return 0;
}
