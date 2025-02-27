/*
 ============================================================================
 Name        : Stack.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a[10],top;
	int n,i;
	puts("Enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	top=a[i];
	}
	printf("%d",top);
}
