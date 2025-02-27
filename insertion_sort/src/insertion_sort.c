/*
 ============================================================================
 Name        : insertion_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,a[10],temp;
	puts("Enter the size");
	scanf("%d",&n);
	puts("Enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}a[j+1]=temp;
	}
	printf("Sorted array");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
