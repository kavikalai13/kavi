#include<stdio.h>
int main()
{
int a[10],i,b[10],n,j;
int *p=a,*q=b,*p1;
printf("enter the size");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("you entered\n");
for(i=0;i<n;i++)
{
printf("index[%d]is%d\n",i,*p);
p++;
}
p=a;
p1=&a[n-1];
while(p<=p1)
{
*q=*p;
q++;
p++;
}
q=&b;
printf("copy the value into another array\n");
for(i=0;i<n;i++)
{
printf("index[%d]is%d\n",i,*q);
q++;
}
}
