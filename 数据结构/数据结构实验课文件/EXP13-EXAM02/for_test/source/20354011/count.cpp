#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
int sum=0;
void CreateBiTree(BiTree &T){
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        T->data=2;
	 	CreateBiTree(T->lchild);
	 	CreateBiTree(T->rchild);
	 	if(T->lchild==NULL)
			T->data--;
		if(T->rchild==NULL)
			T->data--;
		if(T->data==1)
			sum++;
    }
}


int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", sum);
    return 0;
}
