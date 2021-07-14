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
int k=0;
int count(BiTree T){
	
    if(T == NULL) return 0;
    else{
    	if((T->lchild==NULL&&T->rchild!=NULL)||(T->rchild==NULL&&T->lchild!=NULL)){
    		if(T->lchild!=NULL&&T->rchild==NULL){
    			k++;
				return count(T->lchild);
			}
			if(T->lchild==NULL&&T->rchild!=NULL){
				k++;
				return count(T->rchild);
			} 
    		
		}
		else {
			count(T->lchild);
			count(T->rchild);
		}
	}
    return k;
	//fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
