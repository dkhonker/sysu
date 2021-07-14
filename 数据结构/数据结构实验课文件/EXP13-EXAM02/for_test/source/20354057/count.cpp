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
		T->data=1;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
    }
}

int count(BiTree T){
    if(T == NULL) return 0;
    //fill this part. This part is really easy.
    int NUM=0;
    if ((T->lchild!=NULL and T->rchild==NULL) or (T->rchild !=NULL and T->lchild==NULL))NUM+=1;
    NUM+=count(T->lchild);
    NUM+=count(T->rchild);
    return  NUM;
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
