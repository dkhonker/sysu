#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct slot
{
	int number;
	char letter;
	struct slot* next;
 } ;
void stru( struct slot* head,int i)
{
	int j;
	head->number=0;
	struct slot* u,*v;
	u=head;
	for(j=1;j<i;j++)
	{
		v=(struct slot*)malloc(sizeof(struct slot));
		v->number =j;
		u->next =v;
		u=v;
	}
	v->next =head;
 } 
int main(int argc, char *argv[]) {
	int number,i,j,instruct;
	char w;
	scanf("%d %d",&number,&i);
	struct slot* head=(struct slot*)malloc(sizeof(struct slot));
	stru(head,i);
	struct slot* rear=head;
	for(j=1;j<=i;j++)
	{
		scanf("%d",&instruct);
		switch(instruct)
		{
			case 1:
		{   
		    getch(w);
			head->letter =w;
 	        rear=rear->next;
 	        break;
		};
		    case 2:
		{
			head->letter=NULL;
			head=head->next; 
			break;
		}
	    }
	    printf("%d %d\n",head->number,rear->number);
	}
	for(;head==rear;head=head->next)
	printf("%c",head->letter);
	return 0;
}
