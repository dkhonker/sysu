#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1]; // r为开始时刻  p为消耗时间 

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; // t 为当前时刻 
	while (tasknum) {
		int min = MaxConsume + 1, minIndex; 
		for (int i = 1; i <= n; i++)
			if (t >= r[i] && p[i] > 0 && p[i] < min) { // 每次t往前走了1，就要通过循环来判断是否有了可以开始的新任务，然后如下 
				min = p[i]; minIndex = i; // 在同一时刻可以开始进行的任务中，寻找最小消耗时间的任务 
			}
		p[minIndex]--; t++; // 表明找到了上述任务并开始做任务，t正在往前 
		if (!p[minIndex]){ // 如果p[minIndex]==0就证明当前任务已完成，记录下完成的时刻即可 
			cnt += t; tasknum--;
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
