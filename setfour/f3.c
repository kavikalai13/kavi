#include<stdio.h>
int main()
{
    int a[10],*p,i;
    p=&a;
    printf("enter five values");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("%d\n",*p);
p++;
    }
}