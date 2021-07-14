#include <iostream>

using namespace std;
#define MAXMIZE 20

int visited[MAXMIZE];


typedef struct node
{
    int data;
    node *firstChild=NULL;
    node *nextSibling=NULL;
}TreeNode,*BinTree;


typedef struct ArcNode
{
    int adjvex;
    struct ArcNode *nextarc=NULL;
    int *info;
}ArcNode;

typedef struct VNode
{
    int data;
    ArcNode *firstarc;
}VNode,AdjList[MAXMIZE];

typedef struct{
    AdjList vertices;
    int vexnum,arcnum;
}ALGraph;

int main()
{
	printf("1");
	return 0;
}
