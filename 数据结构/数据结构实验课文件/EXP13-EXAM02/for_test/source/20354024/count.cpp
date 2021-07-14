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
		CreateBiTree(T->lchild);

		CreateBiTree(T->rchild);

    }
}

int count(BiTree T){
	int sum=0;
    if(T == NULL) return 0;
    //fill this part. This part is really easy.
    sum+=count(T->lchild)+count(T->rchild);
    if ((T->lchild==NULL&&T->rchild!=NULL)||(T->lchild!=NULL&&T->rchild==NULL))
    sum++;
    return sum;
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
