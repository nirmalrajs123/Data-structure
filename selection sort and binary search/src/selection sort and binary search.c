/*
 ============================================================================
 Name        : selection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,a[10],min,temp;
	puts("enter the size");
	scanf("%d",&n);
	puts("enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
		if(a[j]<a[min]){
			min=j;
		}
		if(min!=i){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	}
	for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
	int flag=0,l=0,u=n-1,mid,key;
	puts("enter the key");
	scanf("%d",&key);
	while(l<=u){
		mid=(l+u)/2;
		if(key==a[mid]){
			flag=1;
			break;
		}else if(key>a[mid]){
			l=mid+1;
		}else{
			u=mid-1;
		}
	}
	if(flag==1){
		puts("no is found");

	}else{
		puts("no is not found");
	}

	return EXIT_SUCCESS;
}
