/*
 ============================================================================
 Name        : program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[10],key;
	puts("enter the size");
	scanf("%d",&n);
	puts("enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	puts("enter the search key");
	scanf("%d",&key);
	for(i=0;i<n;i++){
	if(key==a[i]){
		printf("search key found");
		return 0;
	}
	}
	printf("search key not found");
}
