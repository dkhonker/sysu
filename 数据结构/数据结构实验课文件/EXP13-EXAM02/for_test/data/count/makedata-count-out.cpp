#include <stdio.h>
#include <stdlib.h>

typedef int Status;
typedef int TElemType;

#define OK           1
#define OVERFLOW    -2
char infilename[10]="0.in";
char outfilename[10]="0.out";
FILE * fin, * fout;

typedef struct BiTNode {
    TElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

Status CreateBiTree(BiTree &T)
{
    char ch;
    fscanf(fin, "%c", &ch);

    if('#' == ch) T = NULL;
    else{
        if(!(T = (BiTNode *)malloc(sizeof(BiTNode)))) exit(OVERFLOW);
        T->data = ch;             //生成根结点
        CreateBiTree(T->lchild);  //构造左子树
        CreateBiTree(T->rchild);  //构造右子树
    }
    return OK;
}

int count(BiTree T){
    if(T == NULL) return 0;
    int c = 0;
    if (T->lchild != NULL && T->rchild == NULL || 
	    T->lchild == NULL && T->rchild != NULL) c++;
    return (c + count(T->lchild) + count(T->rchild));
}

int main()
 {
 	char m[10000];
	for(int t=0;t<10;t++){
		printf("%d", t);
	    infilename[0] = '0' + t;
		outfilename[0] = '0' + t;
		fin = fopen(infilename, "r");
	    fout = fopen(outfilename, "w");
        BiTree T;
        CreateBiTree(T);
        fprintf(fout, "%d", count(T));
		fclose(fin);
	}
	return 0;
}


