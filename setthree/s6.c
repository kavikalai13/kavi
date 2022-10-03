#include<stdio.h>
int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
        printf("%d is positive number",a);
        break;
        case 0:
             switch(a<0)
             {
                 case 1:
                  printf(" %d negative number",a);
                  break;
                  case 0:
                   printf("%d is zero",a);
             }
             

    }

}