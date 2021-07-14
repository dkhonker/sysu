#include <stdio.h>
#include <stdlib.h>

typedef struct BiTNode 
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T)
{
    char ch;
    scanf("%c", &ch);
    if('#' == ch) T = NULL;
    else
	{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        else
		{
			T->data = ch; 
			CreateBiTree(T->lchild);
			CreateBiTree(T->rchild);
		} 
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
    }
}

int ans=0;
int count(BiTree T)
{
    if(T == NULL) return 0;
    else
    {
    	if(T->lchild!=NULL && T->rchild!=NULL)
    	{
    		count(T->lchild);
    		count(T->rchild);
		}
		else if(T->lchild==NULL && T->rchild==NULL)
		{
			ans +=1;
		}
		else if(T->lchild==NULL && T->rchild!=NULL)
		{
			ans+=1;
			count(T->rchild);
		}
		else
		{
			ans+=1;
			count(T->lchild);
		}
	}
    //fill this part. This part is really easy.
}

int main()
{
    BiTree T;
    CreateBiTree(T);
    count(T);
    printf("%d", ans);
    return 0;
}
