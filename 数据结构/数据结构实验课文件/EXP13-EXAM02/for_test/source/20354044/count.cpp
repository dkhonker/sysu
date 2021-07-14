#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T){
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
		T->data=ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
    }
}
bool visit(BiTNode *ct){
	
	if((ct->lchild==0&&ct->rchild!=0)||(ct->rchild==0&&ct->lchild!=0))
	return 1;
	else return 0;
}
int count(BiTree &T){
	int count_=0;
	BiTNode *current=T;if(current!=0){
	if(visit(current)){count_=1;
	}
		count_+=count(current->lchild);
		count_+=count(current->rchild);
	}
	return count_;
}


int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
