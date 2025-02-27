/*
 ============================================================================
 Name        : poly.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct poly
{
  int co;
  int ex;
}p1[20],p2[20],p3[20];

int readpoly(struct poly[]);
int addpoly(struct poly[],struct poly[],struct poly[],int t1,int t2);
void display(struct poly[],int term);

 void main()
{setbuf(stdout,NULL);
	int t1,t2,t3;
	t1=readpoly(p1);
	printf("1st poly");
	display(p1,t1);

		t2=readpoly(p2);
		printf("2st poly");
		display(p2,t2);

		       t3=addpoly(p1,p2,p3,t1,t2);
				printf("result poly");
				display(p3,t3);

}


int readpoly(struct poly p[20])
{setbuf(stdout,NULL);
   int t1,i;
   printf("size of term");
   scanf("%d",&t1);
   for(i=0;i<t1;i++)
   {  printf("co %d term",i+1);
	   scanf("%d",&p1[i].co);
	   printf("exponent %d term",i+1);
	   scanf("%d",&p1[i].ex);

   }
	return(t1);
}


void display(struct poly p[20],int term)
{setbuf(stdout,NULL);
 int k;
 for(k=0;k<term;k++)
    {  printf("%d(x^%d)+",p1[k].co,p1[k].ex);
    }
}


int addpoly(struct poly p1[20],struct poly p2[20],struct poly p3[20],int t1,int t2)
{
 	 int i=0,j=0,k=0;
 	 while(i<t1&&j<t2)
 	 {
 		 if(p1[i].ex==p2[j].ex)
 		 {
 			 p3[k].co=(p1[i].co) +(p2[i].co);
				p3[k].ex=p1[i].ex;
				i++;j++;k++;
 		 }
 		 else if(p1[i].ex>p2[j].ex)
 		 {
 			 p3[k].co=p1[i].co;
 							p3[k].ex=p1[i].ex;
 							i++;k++;
 		 }
 		 else
 		 {
 			p3[k].co=p2[j].co;
 		    p3[k].ex=p2[j].ex;
 			j++;k++;
 		 }
 	 }

while(i<t1)
{
	 p3[k].co=p1[i].co;
					p3[k].ex=p1[i].ex;
					i++;k++;
}
 	while(i<t2)
 	{
 		 p3[k].co=p2[i].co;
 		 p3[k].ex=p2[i].ex;
 		 j++;k++;
 	}
 	 return(k);
