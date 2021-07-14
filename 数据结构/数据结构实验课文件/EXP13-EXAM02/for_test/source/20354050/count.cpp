#include <stdio.h>
#include <stdlib.h>
int c = 0;
typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T){
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);//这是什么意思？ 
        T->data = ch;
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
    }
}

void count(BiTree T){
    if(T == NULL) return ;
    if(T->lchild != NULL &&T->rchild==NULL) {
	c++; count(T->lchild);
	}
	else if(T->lchild == NULL &&T->rchild!=NULL) {
	c++; count(T->rchild);
	}
	else {
	count(T->lchild);
	count(T->rchild);}
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
	count(T);
    printf("%d", c);
    return 0;
}
