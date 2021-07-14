#include <stdio.h>
#include <stdlib.h>

int time=0;
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
        T->data=ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
    }
}

int count(BiTree T){
	int a;
    int b;
    if(T == NULL) return 0;
    else{
    	a=count(T->lchild);
    	b=count(T->rchild);
	}
    if(a==0&&b==0)
    return 1;
    else if(a==0||b==0)
    {
    	time=time+1;
    	return 1;
	}
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    int a=count(T); 
    printf("%d", time);
    return 0;
}
