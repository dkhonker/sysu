#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct ClrList{
	char c;
	struct ClrList *next;
	int num;
};

struct ClrList *head,*front,*rear;


void CreateList(int m){
	ClrList *p1,*p2;
	int i;
	for(i=0;i<m;i++){
		p1=(ClrList *)malloc(sizeof(ClrList));
		p1->num=i;
		if(!i){
			p2=p1;
			head=p1;
		}
		else{
			p2->next=p1;
			p2=p1;
		}
	} //for
	p1->next=head;
	front=rear=head;
}

void InsertList(int m){
	char InChar;
	InChar=getchar();
	getchar();
	rear->c=InChar;
	rear=rear->next;
	printf("%d %d\n",front->num,rear->num);
}

void DeleteList(int m){
	front->c='\0';
	front=front->next;
	printf("%d %d\n",front->num,rear->num);
}

int main(){
	int m,n,i,j;
	struct ClrList *ptr;
	scanf("%d%d",&m,&n);
	getchar();
	CreateList(m);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		getchar();
		if(j==1) InsertList(m);
		if(j==2) DeleteList(m);
		
	}
	ptr=front;
	for(i=0;i<m;i++){
		if(ptr->c!='\0')printf("%c",ptr->c);
		ptr=ptr->next;
	}
	return 0;
}
