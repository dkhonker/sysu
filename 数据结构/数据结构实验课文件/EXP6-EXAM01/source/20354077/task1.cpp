#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct slot
{
	char data;
	int slo;
	struct slot* next;
};

void struct1(struct slot* ad,int i)
{
	struct slot* q;
	int w=1;
	while(i>1)
	{
		q=(struct slot*)malloc(sizeof(struct slot));
		q->slo=w;
		w++;
		ad->next=q;
		ad=ad->next;
		i--;
	}
	ad=ad->next;
}
int main(int argc, char *argv[]) {
	struct slot* head;
	head=(struct slot*)malloc(sizeof(struct slot));
	struct slot* rear=head;
	head->slo=0;
	int i,j,m;
	char n;
	scanf("%d%d",&i,&j);
	struct1(head,i);
	for(;j>0;j--)
	{
		scanf("%d",&m); getchar(); 
		i=0;
		if(m==1)
		{
			scanf("%c",&n);
			rear->data=n;
			rear=rear->next;
		}
		else
		head=head->next;
		printf("%d %d\n",head->slo,rear->slo); 
	}
	
	for(;head!=rear;head=head->next)
	{
		printf("%c",head->data);
	}
	return 0;
}
