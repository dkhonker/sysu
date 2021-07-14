#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n;
	while (tasknum) {
		int min = MaxConsume + 1, j=1; int flag=0;int last=201;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				if(p[i]<last)
			{	last=p[i];j=i;flag=1;}
			}
		}  

	if(last!=201){	p[j]--; t++; } 
	else t++; //process task j in the current time unit.
		if (p[j] == 0&&flag==1){
		cnt=cnt+t;
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
