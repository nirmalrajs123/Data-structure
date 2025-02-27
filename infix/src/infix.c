/*
 ============================================================================
 Name        : infix.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int stack[10];
int top=-1;
void push(int x){
	top++;
	stack[top]=x;
}
int pop(){
	return stack[top];
	top--;
}
int main(void) {
	int i,j,n,n2;
	char a[10];
	setbuf(stdout,NULL);
	puts("enter the expression");
		scanf("%s",a);
		puts("enter the no of symbols to insert");
		scanf("%d",&n);
//	printf("%s",a);
		  while (a[i] != '\0')
		    { if(isdigit(a[i])){
		    	push(a[i]);
		    }else{
		    	for(j=0;j<n;j++){
		    	n[j]=pop();
		    	n[j+1]=pop();
		        push(n[j+1]a[i]n[j]);
		    	}
		    }

		        i++;
		    }
}
