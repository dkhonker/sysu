#include <stdio.h>
#include <stdlib.h>

int m;  //??? 

struct node{
	int data;
	struct node *next;
};
node *head; // head????? 

void insert(int i, int x){//??x?a[i] 
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

void find(int x){//?????x 
	node *p = head->next; 
	int j = 1;
	do{
		if(p->data==x) printf("%d",j);
		else{
			p=p->next;
			j++;
		}
	}while(p!=NULL);
	//add something here
	if (p == NULL) j = 0;
	printf("%d\n", j);
}

void deleteByRange(int x, int y){ //??[x,y]?????? 
	node *p = head;
	node *q = head-> next;
	while (q != NULL){
		if (q->data >= x && q->data <= y){
			p->next=q->next;
			free(q);
			q=p->next;
			//add something here
		}
		else{
			p=q;
			q=q->next;
			//add something here
		}
	}
} 

int main() {
	scanf("%d", &m);
	head = (node*) malloc(sizeof(node));
	head->next = NULL;
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
