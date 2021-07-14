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
		T->data=ch;
		
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
    }
}

int count(BiTree T){
    if(T == NULL) return 0;
    int t1=0,t2=0,t3=0,t=0;
    //int n=0; 
    
    	if((T->lchild!=NULL&&T->rchild==NULL))
    	{
    		n++;
    		count(T->lchild);
		}
		if(T->lchild==NULL&&T->rchild->data!=NULL)
		{
			n++;
			count(T->rchild);
		}
	
   /* t1=count(T->lchild);
	t2=count(T->rchild);*/
	//t=t1+t2+t3; 
	return n;
	
	
	   //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
