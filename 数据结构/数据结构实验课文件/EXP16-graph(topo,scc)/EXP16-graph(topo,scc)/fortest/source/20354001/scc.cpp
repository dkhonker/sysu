#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

const int maxn=50000;
const int maxm=500000;

int n,m;

int a[maxm + 1], b[maxm + 1];
int p[maxn + 2];
int linkto[2 * maxm + 1];
/*p ��linkto ��һά������ �洢�����ڽӱ� (ʹ�÷��㣬�����ö�̬���飩 
 linkto ���һά�����   p[v]+1...p[v+1] ��Щλ�ô洢v��ֱ�Ӻ�̡� 
 ��ͨ���Ķ�������κ����Ĵ��룬�����p��linkto  */ 
void input_data() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
		scanf("%d %d", &a[i], &b[i]);
	for (int i = 1; i <= m; i++) p[a[i]]++;	// example 0 1 0 1 1... 
	for (int i = 1; i <= n; i++) p[i] = p[i] + p[i - 1];//�൱��ָ�룬�������  example 0 1 1 2 3...
	p[n + 1] = p[n];  //trick ��һ��ָ��ָ�����һ��Ԫ��
	for (int i = 1; i <= m; i++) {//�����ڽ�����
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

int tComponent=0; // tComponent�ǵ�ǰ�ҵ���ǿ��ͨ������� 
int size[maxn];   // size[i]�����i��ǿ��ͨ�� �Ķ��������   

void tarjan_scc(int v){  // SCC������! 
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
        /*���������ұ�key���ֵ*/
        while (arr[++i] < key)
        {
            if (i == high){
                break;
            }
        }
        /*���������ұ�keyС��ֵ*/
        while (arr[--j] > key)
        {
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*����i,j��Ӧ��ֵ*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*����ֵ��j��Ӧֵ����*/
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

