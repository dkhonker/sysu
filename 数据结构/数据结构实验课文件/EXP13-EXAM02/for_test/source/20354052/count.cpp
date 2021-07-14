#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode 
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T)
{
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else
	{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
		T->data=ch;
        //fill this part. 
		//Hint: what should be T->ch?  
		CreateBiTree(T->lchild);//Hint: recursively build T->lchild and T->rchild
		CreateBiTree(T->rchild);
    }
}

int count(BiTree T)
{
    if(T == NULL) return 0;
    else if(T->lchild!=NULL&&T->rchild==NULL) return count(T->lchild)+1;
    else if(T->lchild==NULL&&T->rchild!=NULL) return count(T->rchild)+1;
    else return count(T->lchild)+count(T->rchild);
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
