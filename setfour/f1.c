#include<stdio.h>
int main()
{
    int a,b,*p,*q,c;
    p=&a;
    q=&b;
    printf("enter two value");
    scanf("%d%d",&a,&b);
    c=*p+*q;
    printf("%d",c);
    return 0;
}