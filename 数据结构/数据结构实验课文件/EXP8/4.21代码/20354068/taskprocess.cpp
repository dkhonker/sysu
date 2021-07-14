#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) {
		int min = MaxConsume + 1, j = 0;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				//add something here
				min = p[i];
				j = i;
			}
		}  

		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0){
			//add something here.  
			//Hint: Update cnt and tasknum
			tasknum--;
			cnt+=t;
		}
	}
	return cnt;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &r[i]);
	for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
	p[0] = 0;
	printf("%d", taskProcess());
	return 0;
}
