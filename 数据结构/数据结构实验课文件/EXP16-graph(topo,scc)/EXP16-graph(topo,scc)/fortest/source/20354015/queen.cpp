#include<stdio.h>


int t,n;

struct Tree{
	int x;
	int y;
	Tree* parent;
	Tree* child;
};

bool valid(int x,int y,Tree* p){
	while(p->x!=0){
		p=p->parent;
		if(g.x!=x&&g.y!=y&&(x+y)!=(g.x+g.y)&&(x-y)!=(g.x-g.y)){
			continue;
		}else return false;
	}
	return True;
}
 void Trial(int i,int n,Tree *p){
 	if(i>n) t++;
 	else{
 		for(int j=1;j<=n;j++){
 			Tree* q=new Tree;
 			q->x=i;q->y=j;
 			p->child=q;
 			q->parent=p;
 			if(valid(i,j,q)){
 					p->child=NULL;
 			        free(q);
			}
		 }
	 }
 	
 }
 int main(){
 	Tree *root;
 	root->parent=NULL;
 	root->x=root->y=0;
 	
 }
