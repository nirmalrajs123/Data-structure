/*
 ============================================================================
 Name        : linkedlists.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct node*head,*node=NULL;
struct node{
	int data;
	struct node*link;
};
struct node* create() {
	int value;
	node=(struct node*)malloc(sizeof(struct node));
	setbuf(stdout,NULL);
   puts("enter the data");
   scanf("%d",&value);
   node->data=value;
   node->link=NULL;
   return node;
}
int main(void) {
	int node;
node=create();
printf("%d",node->data);
}
