/*
 ============================================================================
 Name        : Stack_project.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 10
int top=-1,stack[max];
int main(void) {
	int ch;
	setbuf(stdout,NULL);
	printf("enter the choice: 1 is push"
			"2 is pop"
			"3 is peek"
			"4 is display");
	scanf("%d",&ch);
	switch(ch){
	case 1:push();
	       break;
	case 2:pop();
		       break;
	case 3:peek();
		       break;
	case 4:display();
		       break;
	default :
	    	   printf(" invalid");

	}
	}
void push(){
	int ch;
	setbuf(stdout,NULL);
	do{
	printf("enter to stack continue push is 1 and final push is 0");
	scanf("%d",&ch);
		int x;
		puts("enter the data");
		scanf("%d",&x);
		if(top==max-1){
			printf("overflow");
		}else{
			top++;
			stack[top]=x;
		}

		}while(ch==1);
;
}
void display(){
	int i;
		for(i=top;i>=0;i--){
		printf("%d",stack[i]);
		}

}
void pop(){
	int ch;dou
	do{
		printf("enter to stack continue pop is 1 and final pop is 0");
		scanf("%d",&ch);

	if(top==-1){
		printf("underflow");
	}else{
		int item=stack[top];
		top--;
		printf("deleted item is %d",item);
		puts("\n");
	}
	}while(ch==1);
}
void peek(){
	if(top==-1){
	printf("underflow");
	}else{
	printf("peek is %d",stack[top]);
	puts("\n");
}
}
