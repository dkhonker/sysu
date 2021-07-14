/*Task 2	任务安排问题 (taskprocess.cpp)
有n 个任务，编号为1~n，需要被完成。假设：
任务i 只能在时刻 ri 后开始处理。任务i 需要 pi个时间单位才能完成。
同一个时间单位只能处理一项任务；一项任务可分多次处理（可暂停，之后继续处理）
设计方案使得Σti 最小，ti 为任务i 被完成的时刻。
输入格式：
n
r1 r2 ... rn
p1 p2 ... pn
输出格式：一个数，表示最小的Σti 。
数据范围：
1 <= n  <=100		
0 <= ri  <= 200.     1 <= pi  <=200
样例输入：
3
1 2 3
4 2 2

样例输出：
19
*/
#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) {
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				min=p[i];
				j=i;
				//add something here
			}
		}  

		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0){
			cnt+=t;
			tasknum--;
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
