#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];//两数列均从下标为1开始 

int taskProcess() 
{
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) //tasknum 为剩余的任务数目 
	{
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) 
		{
			//对于所有可进行且未完成的任务，比较剩余的完成所需要的时间，最小的付给min
			//并且将min对应的任务序号付给j，表明接下来的一个时刻单位完成第j个任务。 
			if (t >= r[i]/*表示i任务达到可进行时刻*/ && p[i] > 0/*表示i任务在该时刻未被完成*/ && p[i] < min) 
			{
				min=p[i];//add something here
				j=i; 
			}
		}  
		
		//接下来的一个时刻单位完成第j个任务。  
		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0)
		{
			tasknum--; 
			cnt=cnt+t; 
			//add something here.  
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
