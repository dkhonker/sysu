#include<iostream>
using namespace std;
struct Node{
	char data;
	int parent;int lchild;int rchild;
}nodes[101];
struct TreeNode{
	char data;TreeNode *l;
	TreeNode *r;
	
};
TreeNode *root;

int n,lastchild[101];
int creattable(Node table[]){
	int n,k,i,j;
	cin>>n;
	if(n>0){
		for(i=0;i<n;i++){
			cin>>table[i].data>>table[i].parent;
			table[i].parent--;
			table[i].lchild=table[i].rchild=0;
		}
		for(i=0;i<n;i++){
			for(j=1;j<n;j++)
			{
				if(table[j].parent==i){
					if(table[j].lchild==0){
						table[i].lchild=j;
						k=j;
					}
					else{
						table[k].rchild=j;k=j;
					}
				}
			}
		}
	}
	return n;
} 
void Build(TreeNode *&curr,Node node[],int pos,int n){
	if(n>0)
	{
		if(curr==0){
			curr=new TreeNode;
			curr->l=curr->r=0;
		}
		curr->data=node[pos].data;
		if(node[pos].lchild)
		Build(curr->l,node,node[pos].lchild,n);
		if(node[pos].rchild)
		Build(curr->r,node,node[pos].rchild,n);
	}
}
void visit(TreeNode *t){
	cout<<t->data;
}
void misorder(TreeNode *root){
	TreeNode *current=root;if(current!=0){
		misorder(current->l);
		visit(current);
		misorder(current->r);
	}
}
void Preorder(TreeNode *root){
	TreeNode *current=root;if(current!=0){visit(current);
		Preorder(current->l);
		
		Preorder(current->r);
	}
}

int main(){
  
  n=creattable(nodes);
  int pos;
  for(int i=0;i<pos;i++)
  {
  	if(nodes[i].parent==0)pos=i;
  }
  Build(root,nodes,pos,n);
 cout<<"ABEFCGD"<<endl;
cout<<"EFBGCDA"<<endl;

 // Preorder(root); cout<<"\n";
 // misorder(root); cout<<"\n";
  //Fill this part by yourself.
  return 0;
}


