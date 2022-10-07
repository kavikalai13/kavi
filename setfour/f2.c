#include<stdio.h>
int main()
{
    int a,b,t,*p,*q;
    printf("enter two value");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
     printf("before swaping\n 'A' value is %d\n and\n 'B' value is %d\n",a,b);
    t=*p;
    *p=*q;
    *q=t;
    printf("after swaping \n'A' value is %d\n and \n'B' value is %d",a,b);
    return 0;
}