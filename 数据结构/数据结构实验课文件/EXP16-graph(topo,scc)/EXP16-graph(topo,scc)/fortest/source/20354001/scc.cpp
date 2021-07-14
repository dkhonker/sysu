#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

const int maxn=50000;
const int maxm=500000;

int n,m;

int a[maxm + 1], b[maxm + 1];
int p[maxn + 2];
int linkto[2 * maxm + 1];
/*p 和linkto 是一维数组来 存储整个邻接表 (使用方便，无需用动态数组） 
 linkto 这个一维数组的   p[v]+1...p[v+1] 这些位置存储v的直接后继。 
 可通过阅读下面这段函数的代码，来理解p和linkto  */ 
void input_data() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
		scanf("%d %d", &a[i], &b[i]);
	for (int i = 1; i <= m; i++) p[a[i]]++;	// example 0 1 0 1 1... 
	for (int i = 1; i <= n; i++) p[i] = p[i] + p[i - 1];//相当于指针，方便遍历  example 0 1 1 2 3...
	p[n + 1] = p[n];  //trick 多一个指针指向最后一个元素
	for (int i = 1; i <= m; i++) {//构建邻接链表
		linkto[p[a[i]]] = b[i];
		p[a[i]]--;
	}
}

int min(int a,int b){
	return a<b ? a:b; 
}

int count=0;
int index[maxn];
int low[maxn];
int stack[maxn],top=0;
int on_stack[maxn];

int tComponent=0; // tComponent是当前找到的强连通块个数。 
int size[maxn];   // size[i]保存第i个强连通块 的顶点个数。   

void tarjan_scc(int v){  // SCC主过程! 
	index[v]=low[v]=count++;
	// push v into the stack and mark v to be on stack.
	stack[top++]=v;
	on_stack[v]=1;
	for(int i=p[v]+1;i<=p[v+1];i++){
		int w=linkto[i];
		//add some code here by yourself
		//Hint 1. dfs. Hint 2. modify low[v]
		if(!index[w]){
			tarjan_scc(w);
			low[v]=min(low[v],low[w]);
		}
		else if(on_stack[w]==1){
			low[v]=min(low[v],index[w]);
		}
	}
	if(index[v]==low[v]){ // find out a new component. 
		int j;
		do{
			//Add some code in the following.
			//Hint: pop an element from the stack to j, and mark j to be not on stack.
			j=stack[--top];
			on_stack[j]=0;
			size[tComponent]++;
		} while (j!=v);
		tComponent++;
	}
}

/*void swap(int &a, int &b) {
  int t = a; a = b; b = t;
}
int partition(int array[], int low, int high) {
  int i=low;
  int j=high;
  int pivot = array[high];
  while(true){
  	while(array[i]<=pivot) i++;
  	while(array[j]>=pivot) j++;
  	if(i>=j) break;
  	swap(array[i],array[j]);
  }
  return i;
}
void quickSort(int array[], int low, int high) {
  // write this by yourself.
  if(low<high){
  	int pivot = partition(array,low,high);
  	quickSort(array,low,pivot-1);
  	quickSort(array,pivot+1,high);
  }
}*/
//quickSort()
void quickSort(int arr[], int low, int high){
    if (high <= low) return;
    int i = low;
    int j = high + 1;
    int key = arr[low];
    while (true)
    {
        /*从左向右找比key大的值*/
        while (arr[++i] < key)
        {
            if (i == high){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[--j] > key)
        {
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*交换i,j对应的值*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*中枢值与j对应值交换*/
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    quickSort(arr, low, j - 1);
    quickSort(arr, j + 1, high);
}
int main(){
	input_data();
	for(int i=1;i<=n;i++)
		if(!index[i]) tarjan_scc(i);
	
	quickSort(size,0,tComponent-1);
    for(int i=tComponent-1;i>=0;i--) printf("%d ",size[i]);
	return 0;
} 

