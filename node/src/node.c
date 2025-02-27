/*
 ============================================================================
 Name        : node.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node*link;
};
int main(void) {
	int p,i;
	struct node *head,*new,*ptr;
	head=0;
	new=(struct node*)malloc(sizeof(struct node));
	setbuf(stdout,NULL);

head=new=ptr;
    do{

    	new=ptr->link;
    	puts("enter the data"); /* prints  */
    	    scanf("%d",&new->data);
    	    puts("enter the stop"); /* prints  */
    	        scanf("%d",&p);
    }while(i==p);
	return EXIT_SUCCESS;
}
