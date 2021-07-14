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
		
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
		T->data=(int)ch;
    }
}

int count(BiTree T){
    int temp_count=0;
	
	if(T == NULL) return 0;
    //fill this part. This part is really easy.
    
    
    else 
    {
    	temp_count+=count(T->lchild);
    	temp_count+=count(T->rchild);
    	if((T->lchild==NULL&&T->rchild==NULL)||(((T->lchild)!=NULL)&&((T->rchild)!=NULL)));
    	else ++temp_count;
    	return temp_count;
	}
	
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
