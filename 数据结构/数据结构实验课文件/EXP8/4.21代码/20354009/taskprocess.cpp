#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];

int taskProcess()
 {
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum)//������������ 
	 {
		int min = MaxConsume + 1, j;
		
		//̰�ģ�������ѡ���Խ��е������������ɵ�����j�ȴ��������ж�������ʣ�๤��������С����ѡ��һ��
		for (int i = 1; i <= n; i++) 
		{
			if (t >= r[i] && p[i] > 0 && p[i] < min) 
			{
			min=p[i];
			j=i;
			}
		}  

		p[j]--; //����һ��ʱ�䵥λ 
		t++;  //ʱ���1 
		
		if (p[j] == 0)//����j��� 
		{
			cnt+=t;//ʱ�̼�t 
        	tasknum--;		//����-1 
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
