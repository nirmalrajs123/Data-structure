/*
 ============================================================================
 Name        : Selection_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,a[10],i,j,temp,min;
	setbuf(stdout,NULL);
	puts("Enter the size");
	scanf("%d",&n);
	puts("Enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	puts("sorted array");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
