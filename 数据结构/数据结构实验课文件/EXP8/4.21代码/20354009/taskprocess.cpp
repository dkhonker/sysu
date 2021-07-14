#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess()
 {
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum)//所有任务数量 
	 {
		int min = MaxConsume + 1, j;
		
		//贪心：总是挑选可以进行的任务中最快完成的任务j先处理。（若有多个任务的剩余工作量都最小，任选其一）
		for (int i = 1; i <= n; i++) 
		{
			if (t >= r[i] && p[i] > 0 && p[i] < min) 
			{
			min=p[i];
			j=i;
			}
		}  

		p[j]--; //花费一个时间单位 
		t++;  //时间加1 
		
		if (p[j] == 0)//任务j完成 
		{
			cnt+=t;//时刻加t 
        	tasknum--;		//任务-1 
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
