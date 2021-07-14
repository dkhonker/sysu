#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T){ // ¹¹ÔìÊ÷ 
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
    
    if(count(T->lchild)) return 1;
	if(count(T->rchild)) return 1;
    return count(T->lchild)+count(T->rchild);
    
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
