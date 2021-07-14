#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; // t records the time
	int min = MaxConsume + 1, j;
	while (tasknum) {
		
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				j=i;//add something here
				min=p[j];
			}
		}  

		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0){
			tasknum--;//add something here.  
			cnt+=t;//Hint: Update cnt and tasknum
		    for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 ) {
				j=i;//add something here
				min=p[j];
			}
		}
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
