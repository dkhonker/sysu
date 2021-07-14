#include<iostream>
using namespace std;

struct Node {
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
		nodes[i].parent = lastchild[f];
		nodes[f].rchild = lastchild[f] = i;	//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(int i)
{ 
	cout<<nodes[i].data;
	if(nodes[i].lchild)
		Preorder(nodes[i].lchild);
	if(nodes[i].rchild)
		Preorder(nodes[i].rchild);//please finish the following parts.  It is easy. 
}
void Midorder(int i)
{ 
	//please finish the following parts. It is easier. 
}

int main()
{
  buildTree();
  Preorder(1); 
  cout<<"\n";
  Midorder(1);
  //Fill this part by yourself.
  return 0;
}
