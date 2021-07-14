#include <stdio.h>
#include <stdlib.h>
char a[200];
int i = 0;
typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void CreateBiTree(BiTree &T){
    char ch;
    scanf("%c", &ch);
    a[i] = ch;
    i++;
    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(-1);
        else
		{
			T->data=ch;
			CreateBiTree(T->lchild);
			CreateBiTree(T->rchild);
		} 
        //fill this part. 
		//Hint: what should be T->ch?  
		//Hint: recursively build T->lchild and T->rchild
    }
}

int count(BiTree T){
    if(T == NULL) return 0;
    int n,m,l;
    m=0;
    for(n = 0;n < i;n++)
    {
    	if((a[n]!='#'&&a[n+1]=='#'&&a[n+2]!='#')||(a[n]!='#'&&a[n+1]=='#'&&a[n+2]=='#'&&a[n+3]=='#'&&a[n+4]!='#'))
    	m = m+1;
    	if((a[n]!='#'&&a[n+1]=='#'&&a[n+2]=='#'&&a[n+3]=='#'&&a[n+4]=='#'&&a[n+5]!='#'))
		m = m+2;
		if((a[n]!='#'&&a[n+1]=='#'&&a[n+2]=='#'&&a[n+3]=='#'&&a[n+4]=='#'&&a[n+5]=='#'&&a[n+6]!='#'))
		m = m+3;
		if((a[n]!='#'&&a[n+1]=='#'&&a[n+2]=='#'&&a[n+3]=='#'&&a[n+4]=='#'&&a[n+5]=='#'&&a[n+6]=='#'&&a[n+7]!='#'))
		m = m+4;
		if((a[n]!='#'&&a[n+1]=='#'&&a[n+2]=='#'&&a[n+3]=='#'&&a[n+4]=='#'&&a[n+5]=='#'&&a[n+6]=='#'&&a[n+7]=='#'&&a[n+8]!='#'))
		m = m+5;
		if((a[n]!='#'&&a[n+1]=='#'&&a[n+2]=='#'&&a[n+3]=='#'&&a[n+4]=='#'&&a[n+5]=='#'&&a[n+6]=='#'&&a[n+7]=='#'&&a[n+8]=='#'&&a[n+9]!='#'))
		m = m+6;
	}
	return m;
    //fill this part. This part is really easy.
}

int main(){
    BiTree T;
    CreateBiTree(T);
    printf("%d", count(T));
    return 0;
}
