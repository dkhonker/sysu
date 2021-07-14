#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node* head[maxn];   //ͷ����x�������ȣ���������x������ڽӵ� 

void topo(){
	int que[maxn], l = 0, r = 0;
	
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;   //�����׶Σ������Ϊ0�Ľ����� 
		
	while (l < r){
		int j = que[l++];
		printf("%d ", j);   //���� 
		
		node* p = head[j]->next;
		while(p != NULL){
			(head[p->x]->x)--;   //j���ڽӵ�����-1 
			if (head[p->x]->x == 0) que[r++] = p->x;   //��Ҫ�����жϣ��Ƿ��Ǹո����ɵ����Ϊ0����Ϊǰ��Ľ���Ѿ�ȫ��Ϊ0�ˣ� 
			
			p = p->next;   //���α���j���ڽӵ� 
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++){
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->next = NULL;
	}
	
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		node* p = new node;
		
		p->x = y;
		p->next = head[x]->next;
		head[x]->next = p;   //��ͷ���뷨�������ڽӱ� 
		
		(head[y]->x)++;   //y�����+1 
	}

	topo();
	
	return 0;
}
