#include<stdio.h>

const int Maxn = 100;
const int MaxConsume = 200;

int n, r[Maxn + 1], p[Maxn + 1];//n����������iʱ��r[i]��ſɿ�ʼ,���������ʱ��Ϊp[i] 

int taskProcess() 
{
	int cnt = 0, t = 0, tasknum = n; 	//cntΪ��ti֮�ͼ���������tΪʱ�䣬tasknumΪ�������� 
	while (tasknum) //�������� 
	{
		int min = MaxConsume + 1, j;
		
		//The following loop finds the task j with the earliest possible finishing time among those who can be processed now.
		for (int i = 1; i <= n; i++) //��i������
		{	int minindex;
			if (t >= r[i] && p[i] > 0 && p[i] < min)//����ɿ�ʼ���һ�δ���.p[i] < min����Ѱ��ʣ�๤������С������ 
			 {
				//add something here
				min = p[i];			//minΪʣ�๤������С������ 
				minindex = i;		//���±��Ϊminindex 
			}
			j = minindex;			//��j = minindex 
		}  
		
		p[j]--; t++;  //process task j in the current time unit. ��ÿСʱ�����㣬��������С������ʱ��-1 ��ǰʱ��+1 
		if (p[j] == 0)	//���һ������� 
		{	
			//add something here.  
			cnt = cnt + t;		//ti֮�͸���ti 
			tasknum--;			//��������-1 
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
