/*
 ============================================================================
 Name        : in.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
main() {
    int a[20],i,n,j,temp;
    printf("n");
    scanf("%d",&n);
    printf("num");
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }
  for(i=1;i<n;i++)
  {
      temp=a[i];
      j=i-1;
      while(j>=0&&a[j]>temp)
      a[j+1]=a[j];
  }
  a[j+1]=temp;

   for(i=0;i<n;i++)
    {
          printf("%d",a[i]);
    }
}

