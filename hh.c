#include<stdio.h>
int main()
{
    int c,b;
    b=1;
    while ((c=getchar())!='*')
    {
        if(c==' ')
            ++b;
         if(c!=' ')
         {
            if(b<=3)
             putchar(' ');
            putchar(c);
            b=1;
         }

    }
}