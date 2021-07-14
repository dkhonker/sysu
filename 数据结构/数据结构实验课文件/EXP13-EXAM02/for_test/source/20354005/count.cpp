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
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
		T->data=ch;
		//T->lchild= (BiTNode *)malloc(sizeof(BiTNode));
		CreateBiTree(T->lchild);
		//T->rchild=T = (BiTNode *)malloc(sizeof(BiTNode));
        CreateBiTree(T->rchild);
    }
}

int count(BiTree T){
    if(T == NULL) return 0;
    //fill this part. This part is really easy.
    if(T->lchild==NULL)
    {
    	if(T->rchild!=NULL)
    	return 1+count(T->rchild);
	}
	else if(T->rchild==NULL)
	{
		if(T->lchild!=NULL)
		return 1+count(T->lchild);
	}
	else return count(T->rchild)+count(T->lchild);
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
