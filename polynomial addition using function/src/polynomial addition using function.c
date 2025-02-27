/*
 ============================================================================
 Name        : polynomial.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct poly{
	int co;
	int ex;
}p1[10],p2[10],p3[10];
int readpoly(struct poly []);
int additionpoly(struct poly [],struct poly [],int ,int ,struct poly []);
void displaypoly(struct poly [],int );
int main() {
	int n1=readpoly(p1);
	puts("First polynomial ");
	displaypoly(p1,n1);
	puts("\n");
	int n2=readpoly(p2);
	puts("Second polynomial ");
	displaypoly(p2,n2);
	int n3=additionpoly(p1,p2,n1,n2,p3);
	puts("\n");
	puts("Resultant polynomial");
	displaypoly(p3,n3);
	return(0);
}
int readpoly(struct poly p[10] ){
	int i,n1;
	setbuf(stdout,NULL);
	puts("enter the no terms of polynomial ");
		scanf("%d",&n1);
	for(i=0;i<n1;i++){  /*for inserting element to polynomial*/
					printf("enter the coefficient of %dth term",i);
					scanf("%d",&p[i].co);
			printf("enter the exponent of %dth term",i);
			scanf("%d",&p[i].ex);
			}
	return(n1);
}


void displaypoly(struct poly p[10],int k)
{
	int i;
	for(i=0;i<k;i++){  /*for display polynomial*/
			printf("%dX^%d +",p[i].co,p[i].ex);
		}
}
int additionpoly(struct poly p1[],struct poly p2[],int n1,int n2,struct poly p3[]){
	int i=0,j=0,k=0;
	while(i<n1 && j<n2 ){      /*addition if both ex equal*/
	if(p1[i].ex==p2[j].ex){
	p3[k].co=p1[i].co+p2[j].co;
	p3[k].ex=p1[i].ex;
	i++;
	j++;
	k++;
	}else if(p1[i].ex>p2[j].ex){  /*insert p1.co to p3.co when p1.ex > p2.ex*/
	p3[k].co=p1[i].co;
	p3[k].ex=p1[i].ex;
	i++;
	k++;
	}else{                         /*insert p2.co to p3 when p1.ex < p2.ex*/
		p3[k].co=p2[j].co;
		p3[k].ex=p2[j].ex;
		j++;
		k++;
	}}while(i<n1){         /*for remaining term in p1*/
		p3[k].co=p1[i].co;
		p3[k].ex=p1[i].ex;
		i++;
		k++;
	}while(j<n2){          /*for remaining term in p2*/
		p3[k].co=p2[j].co;
		p3[k].ex=p2[j].ex;
		j++;
		k++;
	}
	return(k);
}
