#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) {
		int min = MaxConsume + 1, j;
		int count,k;
		p[0]=-1;
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {
			j=0;
			count=0;
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				count++;
				//add something here
				if(count==1) {k=p[i];j=i;}
				else if(k>p[i]) j=i;
			}
		}  
		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0){
			tasknum--;
			cnt+=t;
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
