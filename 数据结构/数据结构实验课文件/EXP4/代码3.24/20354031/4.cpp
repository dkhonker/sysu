#include<stdio.h>
#include<stdlib.h>
struct num{
	char a;
	struct num *front,*back;
};
void CreateList(int m){
	struct num a,*head,*rear,*p,*q;
	int i;
	head=q=p=&a;rear=a->back;
	for(i=0;i<m-1;i++){
		p=p->back;rear=p;p->front=q->back;q=q->back;
	}
	head->front=p;p->back=head;
}
int main(){
	int i,j,m,n;
	scanf("%d%d",&m,&n);
	CreateList(m);
	for(j=0;j<n;j++){
		scanf("%d",&i);
		switch(i)
		case 1:add();break;
		case 2:del();break;
	}
	return 0;
} 
