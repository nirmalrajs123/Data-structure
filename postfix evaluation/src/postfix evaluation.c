/*
 ============================================================================
 Name        : postfix.c
 Author      : rojin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int stack[100],top=-1,i,res;
char ch,a[20];
int eval(char,int,int);
void push(int data){
	top++;
	stack[top]=data;
}
int pop(){
	int data=stack[top];
	top--;
	return data;
}
int main(void) {
	setbuf(stdout,NULL);
	puts("Enter the expression");
	scanf("%s",a);
	int e=a;
	while(e!='\0'){

		 printf("%d\t",a[i]);
		ch=a[i];
		if(ch>= '0' && ch<= '9'){
			push(a[i]);
            printf("%d\t",a[i]);
		}else{
			int op2=pop();
		    int op1=pop();
		     res=eval(ch,op1,op2);
		   push(res);
		}
	e++;
	}
	int x=pop();
	printf("Evaluated value %d",x);
}
int eval(char ch,int op1,int op2){
	int res;
			    switch(ch){
			    	case '+': res=(op1+op2);  return res;
			    	case '-': res=(op1-op2);  return res;
			    	case '*': res=(op1*op2);  return res;
			    	case '/': res=(op1/op2);  return res;
			    }

}
