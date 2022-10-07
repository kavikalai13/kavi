#include<stdio.h>
int main()
{
int a[10],i,b,n;
int *p=a;
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
p=&a[n-1];
printf("reversed order\n");
for(i=0;i<n;i++)
{
printf(" index[%d] is %d\n",i,*p);
p--;
}
}
