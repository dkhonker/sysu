#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode {
    char data;
    int number;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T){
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
        
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
    }
}
int num=0;
int count(BiTree T){
	int t;
	if(T == NULL) return 0;
	else
	{
		t=1;
	}
	T->number +=count(T->lchild);
    T->number +=count(T->rchild);
    
    
    if(T->number==1)num++;
    
    return t;
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    int x = count(T);
    printf("%d", num);
    return 0;
}
