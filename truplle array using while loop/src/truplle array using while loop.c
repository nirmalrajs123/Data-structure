/*
 ============================================================================
 Name        : truplle.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	setbuf(stdout,NULL);
	int r,c,i,j,a[10][10],t[10][10],k=1,count=0;
	puts("enter the no of rows");
	scanf("%d",&r);
	puts("enter the no of column");
	scanf("%d",&c);
	puts("enter the elements of Sparrse matrix");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	} i=0,j=0;
	puts("Conversation to array representation");
	while(i<r){
		while(j<c){
			if(a[i][j]!=0){
				t[k][0]=i;
				t[k][1]=j;
				t[k][2]=a[i][j];
				k++;
				count++;

			}j++;
		}
	}t[0][0]=r;
	t[0][1]=c;
	t[0][2]=count;
	for(k=0;k<count+1;k++){
			for(i=0;i<3;i++){
				printf("%d",t[k][i]);
			}puts("\t");
		}

}
