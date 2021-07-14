#include<stdio.h>
const int Maxn = 100;
const int MaxConsume = 200;
int n, r[Maxn + 1], p[Maxn + 1];
int taskProcess() 
{
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) 
	{
		int tempj, j = 1;
		int min = MaxConsume + 1;
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i < n; i++)
		{
			if (t >= r[i] && p[i] > 0 && p[i] < min)
			{
				min = MaxConsume + 1;
				tempj = 0;
				//add something here
				//找r[1] -r[i]里p[j]最小的
				if (p[i] < min)
				{
					min = p[i];
					j = i;
				}
				//break;  跳while
			}
		}  
		p[j]--; 
		t++;  //process task j in the current time unit.
		if (p[j] == 0)
		{
			cnt = t + cnt;
			tasknum--;
			//add something here.  
			//Hint: Update cnt and tasknum
		}
	}
	return cnt;
}
int main() {
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) scanf_s("%d", &r[i]);
	for (int i = 1; i <= n; i++) scanf_s("%d", &p[i]);
	printf("%d", taskProcess());
	return 0;
}
