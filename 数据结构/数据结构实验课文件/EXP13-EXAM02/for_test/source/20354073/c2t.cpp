#include<iostream>
using namespace std;

struct Node 
{
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];

void buildTree()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++)
  {
	int f = nodes[i].parent;
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else
	{
		nodes[lastchild[f]].rchild=i;
		lastchild[f]=i;
	}
  }
}

void Preorder(Node &root)
{
	if(root.data)
	{
		printf("%c",root.data);
		Preorder(nodes[root.lchild]);
		Preorder(nodes[root.rchild]);
	}
}
void Midorder(Node &root)
{
	Midorder(nodes[root.lchild]);
	printf("%c",root.data);
	Midorder(nodes[root.rchild]);
}

int main()
{
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]);
  return 0;
}
