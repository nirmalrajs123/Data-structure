/*
 ============================================================================
 Name        : stack.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void push(int top,int a[],int n);
void pop(int top,int a[]);
int main(void) {
	setbuf(stdout,NULL);
	int a[10],top,item;
	int n,i;
	puts("Enter the size");
	scanf("%d",&n);
	puts("enter the element");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	top=i;
	}
	puts("enter the new element");
	scanf("%d",&item);
 //push(top,a,item);
	a[10]=NULL;
	pop(top,a);
    for(i=0;i<=n;i++){
    printf("%d",a[i]);
 	}
}

void push(int top,int a[],int item){
	if(top<10){
		top=top+1;
		a[top]=item;
	}else{
		printf("Overflow");
	}
}
void pop(int top,int a[]){
	if(top==-1){
		printf("empty");
	}
}
