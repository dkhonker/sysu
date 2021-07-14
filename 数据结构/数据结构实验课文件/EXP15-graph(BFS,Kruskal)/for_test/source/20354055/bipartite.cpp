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




void creatGraph(ALGraph &G)
{

    for(int i=1;i<=G.vexnum;i++)
    {
        cin >> G.vertices[i].data;
        G.vertices[i].firstarc=NULL;
    }
    for(int j=1;j<=G.arcnum;j++)
    {
        int point1,point2;
        cout << "" ;
        cin>> point1 >> point2 ;
        ArcNode *a1 = new ArcNode;
        a1->adjvex=point2;
        a1->nextarc=G.vertices[point1].firstarc;
        G.vertices[point1].firstarc=a1;
        ArcNode *a2 = new ArcNode;
        a2->adjvex=point1;
        a2->nextarc=G.vertices[point2].firstarc;
        G.vertices[point2].firstarc=a2;
    }
   cout << endl;
}

void Destroy(ALGraph &G)
{
    for(int i=1;i<=G.vexnum;i++)
    {
        G.vertices[i].firstarc->nextarc=NULL;
    }
    cout << "销毁成功！" << endl;
}

void Dfs(ALGraph G,int i,BinTree &T)
{
    visited[i]=1;
    bool first=true;//表示是否为当前节点第一个孩子
    TreeNode *locat;//同样是定位作用
    while(G.vertices[i].firstarc!=NULL)//从此节点出发，访问邻接节点。
    {
        if(visited[G.vertices[i].firstarc->adjvex]==0)
        {
            visited[G.vertices[i].firstarc->adjvex]=1;
            TreeNode *t=new TreeNode;//建立一颗小树
            t->data=G.vertices[i].firstarc->adjvex;
            if(first)//是当前节点第一个孩子
            {
                T->nextSibling=t;//建立右孩子
                first=false;//表示不是传进来的第一个孩子,则是孩子们的兄弟
            }
            else
            {
                locat->nextSibling=t;
            }
            locat=t;
            Dfs(G,G.vertices[i].firstarc->adjvex,t);//继续对小树找兄弟
        }
        G.vertices[i].firstarc=G.vertices[i].firstarc->nextarc;
    }
}

void DFS_Traverse(ALGraph G,BinTree &T)
{
    TreeNode *locat;//此处定义一个定位指针，用来定位当前树的位置
    for(int i=1;i<=G.vexnum;i++)
    {
        visited[i]=0;
    }
    for(int i=1;i<=G.vexnum;i++)
    {
        if(visited[i]==0)
        {
            TreeNode *t=new TreeNode;//这代表一个小树
            t->data=G.vertices[i].data;
            if(T==NULL)
            {
                T=t;//若树为空，建立头节点
            }
            else
            {
                locat->nextSibling=t;//若树不空，则是森林，插入右兄弟
            }
            locat=t;//定位至小树
            Dfs(G,i,locat);//建立小树
        }
    }
}

//建立图深度优先搜索森林
void DFSForest(ALGraph G,BinTree &T)
{
    DFS_Traverse(G,T);
}

void Display(BinTree T)
{
    if(T)
    {
        cout << T->data << ' ';
        Display(T->firstChild);
        Display(T->nextSibling);
    }
}


int main()
{
    ALGraph G;
    BinTree T;
    creatGraph(G);
    DFSForest(G,T);
    Display(T);
    return 0;
}
