#include<stdio.h>
#include<math.h>
const int maxn = 10;
int Q[maxn+1];
int n;
int count=0;

bool is_ok(int i){
    for(int j=0;j!=i;j++)
	{
        if(Q[i]==Q[j] || i-Q[i]==j-Q[j] || i+Q[i]==j+Q[j])
            return false;
        }
    return true;
}
     
void Trial(int i){
    //���뱾����ʱ����n*n������ǰ��i-1���У��Ѿ�����������Լ�������ģ�i-1��������
  	//���ڴӵ�i�м���Ϊ��������ѡ�����λ��
	//��i>nʱ�����һ���Ϸ����֣����
	if(i == n)//������̵ĵ�ǰ����
		count++;
	else{
		for(int j=0;j!=n;j++)
		{
		//�ڵ�i��j�з���һ������;
		Q[i] = j;
		if(is_ok(i))//��ǰ���ֺϷ� 
		{
			Trial(i+1);
			//���ߵ�i�е�j�е�����;
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	Trial(0);
	printf("%d",count%10000);
}
