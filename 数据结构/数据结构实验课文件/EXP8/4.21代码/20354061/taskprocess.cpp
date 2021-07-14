/*Task 2	���������� (taskprocess.cpp)
��n �����񣬱��Ϊ1~n����Ҫ����ɡ����裺
����i ֻ����ʱ�� ri ��ʼ��������i ��Ҫ pi��ʱ�䵥λ������ɡ�
ͬһ��ʱ�䵥λֻ�ܴ���һ������һ������ɷֶ�δ�������ͣ��֮���������
��Ʒ���ʹ�æ�ti ��С��ti Ϊ����i ����ɵ�ʱ�̡�
�����ʽ��
n
r1 r2 ... rn
p1 p2 ... pn
�����ʽ��һ��������ʾ��С�Ħ�ti ��
���ݷ�Χ��
1 <= n  <=100		
0 <= ri  <= 200.     1 <= pi  <=200
�������룺
3
1 2 3
4 2 2

���������
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
