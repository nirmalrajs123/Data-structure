/*
 ============================================================================
 Name        : polynomail.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct poly{
	int co;
	int ex;

}p1[10],p2[10];
void main() {
	setbuf(stdout,NULL);
	int i,n1,n2;
	puts("enter the no terms of first polynomial ");
	scanf("%d",&n1);
	puts("first polynomial enter");
	for(i=0;i<n1;i++){
				printf("enter the coefi of %dth term",i);
				scanf("%d",&p1[i].co);
		printf("enter the expon of %dth term",i);
		scanf("%d",&p1[i].ex);
		}
	puts("enter the no terms of second polynomial ");
		scanf("%d",&n2);
		puts("second polynomial enter");
		for(i=0;i<n2;i++){
					printf("enter the coefi of %dth term",i);
					scanf("%d",&p2[i].co);
			printf("enter the expon of %dth term",i);
			scanf("%d",&p2[i].ex);
			}
		puts("first polynomal :");
	for(i=0;i<n1;i++){
		printf("%dX^%d +",p1[i].co,p1[i].ex);
	}
	puts("..\n");

	puts("second polynomal :");
	for(i=0;i<n2;i++){
		printf("%dX^%d +",p2[i].co,p2[i].ex);
	}
	puts("..");
}


