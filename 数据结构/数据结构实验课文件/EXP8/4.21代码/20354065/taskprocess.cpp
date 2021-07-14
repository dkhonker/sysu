#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];//�����о����±�Ϊ1��ʼ 

int taskProcess() 
{
	int cnt = 0, t = 0, tasknum = n; 
	while (tasknum) //tasknum Ϊʣ���������Ŀ 
	{
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) 
		{
			//�������пɽ�����δ��ɵ����񣬱Ƚ�ʣ����������Ҫ��ʱ�䣬��С�ĸ���min
			//���ҽ�min��Ӧ��������Ÿ���j��������������һ��ʱ�̵�λ��ɵ�j������ 
			if (t >= r[i]/*��ʾi����ﵽ�ɽ���ʱ��*/ && p[i] > 0/*��ʾi�����ڸ�ʱ��δ�����*/ && p[i] < min) 
			{
				min=p[i];//add something here
				j=i; 
			}
		}  
		
		//��������һ��ʱ�̵�λ��ɵ�j������  
		p[j]--; t++;  //process task j in the current time unit.
		if (p[j] == 0)
		{
			tasknum--; 
			cnt=cnt+t; 
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
