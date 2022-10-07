#include<stdio.h>
void search(int size,int searc,int *arr);
int main()
{
int a[10],i,n,s;
printf("enter the size");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value to be search");
scanf("%d",&s);
search(n,s,a);
return 0;
}
void search(int size ,int searc,int *arr)
{
int flag=0,i;
for(i=0;i<size;i++)
{
if(searc==arr[i])
{
flag=1;
break;
}
}
if(flag==1)
{

  printf(  "the number is present");
}
else
{
printf("the number is not present");
}
}
