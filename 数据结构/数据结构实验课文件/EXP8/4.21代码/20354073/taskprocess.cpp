#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];  //r是开始时间，p是所需消耗时间

int taskProcess() 
{
	int cnt = 0, t = 0, tasknum = n;  //t是当前时间
	while (tasknum)
	{
		int min = MaxConsume + 1, j;

		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 0; i < tasknum; i++)
		{
			if (t >= r[i] && p[i] > 0 && p[i] < min)
			{
					min = p[i];
					j = i;
			}
		}
		p[j]--;
		t++;
		if (p[j] == 0)
		{
			tasknum--;
			cnt += t;  //Hint: Update cnt and tasknum
		}
		
	}
	return cnt;
}

int main() 
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &r[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	printf("%d", taskProcess());
	return 0;
}
