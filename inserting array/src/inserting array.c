/*
 ============================================================================
 Name        : inserting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int size=10;
	int n,i,a[size],place,item;
	puts("enter the size");
	scanf("%d",&n);
	puts("enter the element");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
puts("elements are");
for(i=0;i<n;i++){
	printf("%d",a[i]);
}puts("\n");
puts("inserting new element at which index");
scanf("%d",&place);
puts("enter new element");
scanf("%d",&item);
if(size==n){
	puts("insertion not possible because no empty cell");
	exit;
}else{
	for(i=n-1;i>=place;i--){
		a[i+1]=a[i];
   }a[place]=item;
   puts("elements are");
   for(i=0;i<=n;i++){
     	printf("%d",a[i]);
     }

}

}
