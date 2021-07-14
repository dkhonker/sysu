#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m,i,j,e,c,front,rear,num;
	char array[20];
    front=0;
	rear=1;
    scanf("%d%d\n",&m,&n);
	for (i=0;i<m;i++){
		scanf("%d",&j);
		if (j==1){
			scanf("%c\n",&num);
			array[i]=num;
			rear++;
			printf("%d%d\n",&front,&rear);
		}
		else{
			for(e=0;e<i;e++){
				array[e]=array[e+1];
			}
		front++;
		printf("%d%d\n",&front,&rear);	
		}
	}
	for (c=0;c<=sizeof(array);c++)
	printf("%d",array[c]);   
	return 0;
}
