#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    char data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T){
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
}

int count(BiTree T){
    if(T == NULL) return 0;
    if((T->lchild==NULL)&&(T->rchild!=NULL))return count(T->rchild)+1;
    if((T->lchild!=NULL)&&(T->rchild==NULL))return count(T->lchild)+1;
    if((T->lchild!=NULL)&&(T->rchild!=NULL))return count(T->lchild)+count(T->rchild);
    if((T->lchild==NULL)&&(T->rchild==NULL))return 0;
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
