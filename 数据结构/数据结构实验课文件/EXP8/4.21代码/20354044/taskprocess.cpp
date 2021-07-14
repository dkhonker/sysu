#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) {
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) {//printf("%d time is testing %d\n",t,i);
			if (t >= r[i] && p[i] > 0 && p[i] < min) {
				//add something here
			  //printf("<:%d\n",i);
				j=i;
				min=p[i];
				//printf("min=%d\n",min);
				
			}
		}  
         //printf("j=%d\n",j);
		p[j]--; t++;  //process task j in the current time unit.
		//printf("pj%d=%d\n",j,p[j]);
		if (p[j] == 0){
			tasknum--;
			cnt=cnt+t;
			
			
			//add something here.  
			//Hint: Update cnt and tasknum
		}
	}
	return cnt;
}

int main() {
	scanf("%d", &n);//TASK NUMBER
	for (int i = 1; i <= n; i++) scanf("%d", &r[i]);//START
	for (int i = 1; i <= n; i++) scanf("%d", &p[i]);//TIME
	printf("%d", taskProcess());//MINI
	return 0;
}
