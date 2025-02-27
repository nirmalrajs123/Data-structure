/*
 ============================================================================
 Name        : quick.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int a[10];
void quicksort(int,int);
int partion(int,int);
void main(){
	int n,i;
	setbuf(stdout,NULL);
	puts("Enter the size");
	scanf("%d",&n);
	puts("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		quicksort(0,n-1);
		puts("Sorted array");
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
	}

void quicksort(int l,int u){
		if(l<u){
	int p=partion(l,u);
	quicksort(l,p-1);
	quicksort(p+1,u);
}}
int partion(int l,int u ){
	int pivot=a[l],i=l,j=u,temp;
	while(i<j){
		while(a[i]<=pivot){
			i++;
		}while(a[j]>pivot){
			j--;
		}if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}temp=a[j];
	a[j]=a[l];
	a[l]=temp;
	return j;
}
