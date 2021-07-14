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
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
    }
}

int count(BiTree T){
    if(T == NULL) return 0;
    //fill this part. This part is really easy.
    int sum = 0;
    if(((!T->lchild)&&(T->rchild))||((T->lchild)&&(!T->rchild)))
    sum++;
    return (sum+count(T->lchild)+count(T->rchild));
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
