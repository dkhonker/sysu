#include <stdio.h>
#include <stdlib.h>

int m;  //������ 

struct node{
	int data;
	struct node *next;
};
node *head;// headָ��ͷ�ڵ� 

void insert(int i, int x){//����x��a[i]; i-1
	node *p = head;
	while (i > 1){
		p = p->next; i--;
	} 
	node *q = (node*) malloc(sizeof(node));
	q->data=x;
	q->next=p->next;
	p->next=q;
	//add something here
} 

void find(int x){//���ҵ�һ��x 
	node *p = head->next; 
	int j = 1;
	//add something here
	while(p!=NULL)
	{
		if(p->data==x){
			printf("%d",j);
			break;
		}
		p=p->next;
		j++;
	}
	if(p==NULL)
	printf("0");
}

void deleteByRange(int x, int y){ //ȥ��[x,y]��Χ�ڵ�Ԫ�� 
	node *p = head;
	node *q = head-> next;
	while (q != NULL){
		if (q->data >= x && q->data <= y){
			//add something here
		}
		else{
			//add something here
		}
	}
} 

int main() {
	//int n;
	//scanf("%d", &m);
	//printf("%d",m);
	head = (node*) malloc(sizeof(node));
	head->next = NULL;
	node *tail=head;
	scanf("%d",&n);
	/*for(int i=0;i<n;i++)
	{
		int ele;
		scanf("%d",&ele);
		//printf("%d",ele);
		node *p=(node*)malloc(sizeof(node));
		p->data=ele;
		//printf("%d\n",p->data);
		tail->next=p;
		tail=p;
	}
	tail->next=NULL;
	node *p=head;
    while(p!=NULL)
    {
    	p=p->next;
    	printf("%d",p->data);
	}
	*/
	for (int k = 0; k < m; k++){
		int c, i, x, y;
		scanf("%d", &c);
		switch (c){
			case 1: scanf("%d%d", &i, &x); insert(i, x); break;
			case 2: scanf("%d", &x); find(x); break;
			case 3: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}
