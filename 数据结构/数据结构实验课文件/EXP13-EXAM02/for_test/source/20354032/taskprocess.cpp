#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1]; // rΪ��ʼʱ��  pΪ����ʱ�� 

int taskProcess() {
	int cnt = 0, t = 0, tasknum = n; // t Ϊ��ǰʱ�� 
	while (tasknum) {
		int min = MaxConsume + 1, minIndex; 
		for (int i = 1; i <= n; i++)
			if (t >= r[i] && p[i] > 0 && p[i] < min) { // ÿ��t��ǰ����1����Ҫͨ��ѭ�����ж��Ƿ����˿��Կ�ʼ��������Ȼ������ 
				min = p[i]; minIndex = i; // ��ͬһʱ�̿��Կ�ʼ���е������У�Ѱ����С����ʱ������� 
			}
		p[minIndex]--; t++; // �����ҵ����������񲢿�ʼ������t������ǰ 
		if (!p[minIndex]){ // ���p[minIndex]==0��֤����ǰ��������ɣ���¼����ɵ�ʱ�̼��� 
			cnt += t; tasknum--;
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
