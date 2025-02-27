/*
 ============================================================================
 Name        : quick_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int partion(int,int);
void quicksort(int,int);
int a[10];
int main(void) {
	int n,i,j;
	setbuf(stdout,NULL);
	puts("Enter the size");
	scanf("%d",&n);
	puts("Enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	 quicksort(0,n-1);
	 puts("Sorted array");
	 for(i=0;i<n;i++){
	 		printf("%d",a[i]);
	 	}

}
void quicksort(l,u){
	if(l<u){

int	p=partion(l,u);
    quicksort(l,p-1);
	quicksort(p+1,u);
}}

int partion(l,u){
	int pivot=a[l],temp;
	int i=l,j=u;

	while(i<j){
		while(a[i]<=pivot){
			i++;
		}
		while(a[j]>pivot){
			j--;
		}
		if(i<j){
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}}

	temp=a[j];
	a[j]=a[l];
	a[l]=temp;
	return j;
}
