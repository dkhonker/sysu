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
        CreateBiTree(T->lchild); //fill this part. 
	    CreateBiTree(T->rchild); 	//Hint: what should be T->ch?  
		T->data=(int)ch;//Hint: recursively build T->lchild and T->rchild
    }
}

int count(BiTree T){
	int sum=0;
    if(T == NULL) return 0;
     //fill this part. This part is really easy.
     else
     {  sum+=count(T->lchild);
        sum+=count(T->rchild);
	    if((T->lchild==NULL&&T->rchild==NULL)||(((T->lchild)!=NULL&&(T->rchild)!=NULL))); 
        else ++sum;
       }
       return sum;
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
