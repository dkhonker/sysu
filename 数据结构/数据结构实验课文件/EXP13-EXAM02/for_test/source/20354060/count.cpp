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
        T->data=ch;//fill this part. 
		CreateBiTree(T->lchild);//Hint: what should be T->ch?  
		CreateBiTree(T->rchild);//Hint: recursively build T->lchild and T->rchild
    }
}

int num=0;
int count(BiTree T){
    if(T == NULL) return 0;
    if(T->lchild==NULL&&T->rchild!=NULL) num+=1;
	if(T->lchild!=NULL&&T->rchild==NULL) num+=1;
	count(T->lchild);
    count(T->rchild);
	return num;//fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
