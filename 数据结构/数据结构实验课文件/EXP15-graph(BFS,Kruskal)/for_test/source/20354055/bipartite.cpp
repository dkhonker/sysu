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
    cout << "���ٳɹ���" << endl;
}

void Dfs(ALGraph G,int i,BinTree &T)
{
    visited[i]=1;
    bool first=true;//��ʾ�Ƿ�Ϊ��ǰ�ڵ��һ������
    TreeNode *locat;//ͬ���Ƕ�λ����
    while(G.vertices[i].firstarc!=NULL)//�Ӵ˽ڵ�����������ڽӽڵ㡣
    {
        if(visited[G.vertices[i].firstarc->adjvex]==0)
        {
            visited[G.vertices[i].firstarc->adjvex]=1;
            TreeNode *t=new TreeNode;//����һ��С��
            t->data=G.vertices[i].firstarc->adjvex;
            if(first)//�ǵ�ǰ�ڵ��һ������
            {
                T->nextSibling=t;//�����Һ���
                first=false;//��ʾ���Ǵ������ĵ�һ������,���Ǻ����ǵ��ֵ�
            }
            else
            {
                locat->nextSibling=t;
            }
            locat=t;
            Dfs(G,G.vertices[i].firstarc->adjvex,t);//������С�����ֵ�
        }
        G.vertices[i].firstarc=G.vertices[i].firstarc->nextarc;
    }
}

void DFS_Traverse(ALGraph G,BinTree &T)
{
    TreeNode *locat;//�˴�����һ����λָ�룬������λ��ǰ����λ��
    for(int i=1;i<=G.vexnum;i++)
    {
        visited[i]=0;
    }
    for(int i=1;i<=G.vexnum;i++)
    {
        if(visited[i]==0)
        {
            TreeNode *t=new TreeNode;//�����һ��С��
            t->data=G.vertices[i].data;
            if(T==NULL)
            {
                T=t;//����Ϊ�գ�����ͷ�ڵ�
            }
            else
            {
                locat->nextSibling=t;//�������գ�����ɭ�֣��������ֵ�
            }
            locat=t;//��λ��С��
            Dfs(G,i,locat);//����С��
        }
    }
}

//����ͼ�����������ɭ��
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
