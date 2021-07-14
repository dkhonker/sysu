#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n;    //cnt是总时间，返回值 ,t是当前时间 
	while (tasknum) {
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		//下面的循环在现在可以处理的任务中找到可能完成时间最早的任务j。
		for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				//add something here
				if(p[i]<min)
				{
					min = p[i];
					j = i;
				}
			}
		}  
		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0){
			//add something here. （完成） 
			//Hint: Update cnt and tasknum
			cnt += t;
			tasknum--; 
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
