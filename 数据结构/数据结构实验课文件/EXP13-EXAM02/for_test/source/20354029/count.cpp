#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
int n=0;

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

int count(BiTree T){
    if(T == NULL) return 0;
    if(count(T->lchild)==0||count(T->rchild)==0){
    	return n++;
	}
	count(T->lchild);
	count(T->rchild);
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
