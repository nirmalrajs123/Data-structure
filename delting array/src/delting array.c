/*
 ============================================================================
 Name        : delting.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout,NULL);
	int n,a[10],i,p,pos,flag=0;
	puts("Enter the size");
	scanf("%d",&n);
	puts("Enter the element");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	puts("Enter the element to delete");
	scanf("%d",&p);
	for(i=0;i<n;i++){
			if(a[i]==p){
				flag=1;
				break;
			}}
	int j;
if(flag==0){
	printf("element not found");
}else{
	for(j=i;j<n-1;j++){
		a[j]=a[j+1];

	}a[n-1]=0;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}

}

}
