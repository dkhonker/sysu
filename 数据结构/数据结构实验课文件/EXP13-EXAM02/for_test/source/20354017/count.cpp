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
        T->data=ch;
		CreateBiTree(T->lchild); 
        CreateBiTree(T->rchild);
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
    }  
	 
}

int count(BiTree T){
	int ans=0;
    if(T == NULL) return 0;
    if(T->lchild==NULL && T->rchild!=NULL )  ans++;
    if(T->lchild!=NULL && T->rchild==NULL )  ans++;
    ans+=count(T->rchild);
    ans+=count(T->lchild);
	return ans;
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
