#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;//最长的单位时间 

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess(int n,int r[],int p[]) {
	int cnt = 0, t = 1, tasknum = n; 
	while (tasknum) {
		int min = MaxConsume + 1, j=1;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				//add something here
				if (p[i]<p[j])j=i;
			}
		}  

		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0){
			//add something here.  
			//Hint: Update cnt and tasknum
			tasknum--;
			cnt=cnt+t;
			
		}
	}
	return cnt;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &r[i]);
	for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
	printf("%d", taskProcess(n,r,p));
	return 0;
}
