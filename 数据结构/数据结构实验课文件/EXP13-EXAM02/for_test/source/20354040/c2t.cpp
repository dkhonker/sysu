#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];

void buildTree(){
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++){
	int f = nodes[i].parent;
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else{
		//Fill this part by yourself.  Think about it first.
		if(nodes[f].rchild!=0)
		{
			nodes[i-1].rchild=lastchild[i-1]=i;
			
		}
		else nodes[f].rchild=lastchild[f]=i;
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy.
	if(root.data){
	printf("%c",root.data);
	Preorder(nodes[root.lchild]);
	Preorder(nodes[root.rchild]); 
	}
	else return;
}
void Midorder(Node &root){ //please finish the following parts. It is easier.
	if(root.data)
	{ 
		Midorder(nodes[root.lchild]);
		printf("%c",root.data);
		Midorder(nodes[root.rchild]);
	}
	else return;
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  Midorder(nodes[1]);
  return 0;
}
