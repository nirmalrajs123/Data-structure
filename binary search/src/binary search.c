/*
 ============================================================================
 Name        : binary.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,a[10],key;
	puts("enter the size");
	scanf("%d",&n);
	puts("enter sorted element only");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	puts("enter the search key");
	scanf("%d",&key);
 int l,u,mid;
 l=0;
 u=n-1;
 for(i=0;i<n;i++){
	 mid=(l+u)/2;
	if(key==a[mid]){
		printf("Search key found");
		return 0;
	}
	else if(key>a[mid]){
		l=mid+1;
	}
	else{
		u=mid-1;
	}
 }
 printf("Search key not found");
}
