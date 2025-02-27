/**
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
void main() {
	setbuf(stdout,NULL);
	int i,n1,n2;
	puts("enter the no terms of first polynomial ");
	scanf("%d",&n1);
	puts("first polynomial enter");
	for(i=0;i<n1;i++){  /*for inserting element to 1st polynomial*/
				printf("enter the coefficient of %dth term",i);
				scanf("%d",&p1[i].co);
		printf("enter the exponent of %dth term",i);
		scanf("%d",&p1[i].ex);
		}
	puts("enter the no terms of second polynomial ");
		scanf("%d",&n2);
		puts("second polynomial enter");
		for(i=0;i<n2;i++){  /*for inserting element to 2st polynomial*/
					printf("enter the coefficent of %dth term",i);
					scanf("%d",&p2[i].co);
			printf("enter the exponent of %dth term",i);
			scanf("%d",&p2[i].ex);
			}
		puts("first Polynomial :");
	for(i=0;i<n1;i++){ /*for display 1st polynomial*/
		printf("%dX^%d +",p1[i].co,p1[i].ex);
	}
	puts("..\n");
	puts("second Polynomial :");
	for(i=0;i<n2;i++){  /*for display 2st polynomial*/
		printf("%dX^%d +",p2[i].co,p2[i].ex);
	}
	puts("..");
printf("Polynomial addition ");
puts("\n");
int j=0,k=0;
i=0;
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
}int n=k;
for(k=0;k<n;k++){  /* for display resultant*/
	printf("%dX^%d +",p3[k].co,p3[k].ex);
}
}


