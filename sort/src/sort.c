/*
 ============================================================================
 Name        : sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
  */

#include <stdio.h>
int part(int l,int h)
{
 int pio,i,j,temp,a[20];
 pio=a[l];
 i=l+1;
 j=h;
while(i<j)
{
 while(a[i]<=pio&&i<h)
 i++;
 while(a[i]>pio)
j--;
if(i<j)
{
 temp=a[l];
a[i]=a[j];
a[j]=temp;
}
}
 temp=a[l];
a[l]=a[j];
a[j]=temp;
return j;
}
void sort(int l,int h)
{
 
if(l<h)
{
  p=part(l,h);
  sort(l,p-1);
  sort(p+1,h);
}

}
void main()
{
 int i,n;
int a[20];
printf("size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
sort(0,n-1);
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
}

