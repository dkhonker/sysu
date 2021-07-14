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
    else
	{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        T->lchild=T->data;
        T->rchild=T->data;
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
    }
}

int count(BiTree T)
{
    if(T == NULL) return 0;
    int count=0;
    if(T->lchild==0)
    	if(T->rchild==0)
    		count=0;
    	else
		{	
			T=T->rchild;
    		if(T->lchild==0)
    			count++;
		}
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
