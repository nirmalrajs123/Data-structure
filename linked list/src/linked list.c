/*
 ============================================================================
 Name        : linked.c
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
int link;
}n1,n2,n3;
int main(void) {
	setbuf(stdout,NULL);
	n1.data=1;
	n2.data=2;
	n3.data=3;
	n1.link=&n2.data;
	n2.link=&n3.data;
	n3.link=NULL;
printf("%d\n",&n1.link);
printf("%d\n",&n2.link);
printf("%d\n",&n3.link);
}
