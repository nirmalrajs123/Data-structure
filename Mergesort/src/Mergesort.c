/*
 ============================================================================
 Name        : Mergesort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void md(int [],int l,int u);
void merge(int a[],int l,int u,int m);
int main(void) {
	int n,a[10],i;
	setbuf(stdout,NULL);
	puts("Enter the size");
	scanf("%d",&n);
	puts("Enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=0,u=n-1;
	md(a,l,u);
	puts("Enter the element");
		for(i=0;i<n;i++){
			printf("%d",a[i]);
		}
}
void md(int a[],int l,int u){
	int m;
	if(l<u){
		m=(l+u)/2;
		md(a,l,m);
		md(a,m+1,u);
		merge(a,l,u,m);
	}
}
void merge(int a[],int l,int u,int m){
	int i=l,j=m+1,k=l,b[10];
	while(i<=m&&j<=u){
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}else{
			b[k++]=a[j++];
		}
	}while(j<=u){
		b[k++]=a[j++];
	}while(i<=m){
		b[k++]=a[i++];
	}
	for(k=l;k<=u;k++){
		a[k]=b[k];
	}
}
