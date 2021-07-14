#include <stdio.h>
int main()
{
	char list[21];
	int len,front=0,rear=0,con,conmand,chr;
	scanf("%d %d",&len,&con);
	for(int i=0;i<con;i++){
		scanf("%d",&conmand);
		if(conmand==1){
			scanf("%c",&chr);
			list[rear]=chr;
			if(rear==len-1)rear=0;
			else rear++;
			printf("%d %d",front,rear);
		}
		if(conmand==2){
			if(front=len-1)front=0;
			else front++;
		}
	}
	if(rear>front){
		for(int i=front;i<rear;i++)
		printf("%c",list[i]);
	}
	if(rear<front){
	for(int i=front;i<len;i++)
		printf("%c",list[i]);
	for(int i=0;i<rear;i++)
		printf("%c",list[i]);
	}
    return 0;	
} 
