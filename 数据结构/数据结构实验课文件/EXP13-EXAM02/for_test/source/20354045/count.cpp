#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		else{
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
		}
		
    }
}

int count(BiTree T){
    if(T == NULL) return 0;	//¿ÕÊ÷ 
    //fill this part. This part is really easy.
    else if(T->lchild==NULL&&T->rchild!=NULL)	//×ó¿ÕÓÒ·Ç¿Õ 
    {
    	return 1+count(T->rchild);
	}
	else if(T->lchild!=NULL&&T->rchild==NULL)	//ÓÒ¿Õ×ó·Ç¿Õ 
	{
		return 1+count(T->lchild);
	}
	else	//×óÓÒ¶¼·Ç¿Õ 
		return count(T->lchild)+count(T->rchild);
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
