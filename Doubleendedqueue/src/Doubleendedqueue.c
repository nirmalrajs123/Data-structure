/*
 ============================================================================
 Name        : Doubleendedqueue.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void push(int x);
#define  max 10
int deque[max];
int front=-1;
int rear=-1;
int ch,h,x,i;
int main(void) {
	do{

    setbuf(stdout,NULL);
   	    printf("enter the option"
   	    		"1-push"
   	    		"4-finish");
       	scanf("%d",&ch);
		switch(ch){
		case 1:printf("enter the item");
			   scanf("%d",&x);
		    push(x);
			   break;

		case 4:
			h=2;
			puts("finish");
			break;

		}
		 h=2;
	}while(h!=1);

}
void push(int x){

	    for(i=0;i<ch;i++){

		if(front==max-1){
			printf("deque is full");
		}else if(front==-1 && rear==-1){
			front=0;
		    rear=0;
			deque[front]=x;
		}else if(front>0){
			front=front-1;
			deque[front]=x;
		}else{
			for(i=rear;i>=front;i--){
				deque[i+1]=	deque[i];
				deque[front]=x;
			}
		}
	}

}
