#include<stdio.h>
int main()
{
    int a, b, c,n;
    printf("1.addition\n2.subtratction\n3.multiplication\n4.division\n5.modulodivision\n");
    printf("enter the choice\n");
    scanf("%d",&n);
    printf("enter two value\n");
    scanf("%d%d",&a,&b);
    switch(n)
    {
        case 1:
        c=a+b;
        printf("%d",c);
        break;
        case 2:
        c=a-b;
        printf("%d",c);
        break;
        case 3:
        c=a*b;
        printf("%d",c);
        break;
        case 4:
        c=a/b;
        printf("%d",c);
        break;
        case 5:
        c=a%b;
        printf("%d",c);
        break;
        default:
         printf("invalid");
    }
}