#include<stdio.h>
int main()
{
    int c,blank,tab,neww;
    blank=0;
    tab=0;
    neww=0;
   while  ((c=getchar())!='*')

    {
        if(c==' ')
        {
            ++blank;
        }
        if(c=='\t')
        {
            ++tab;

        }
        if(c=='\n')
        {
            ++neww;
        }
    }
    printf("blank=%d,tab=%d,neww=%d",blank,tab,neww);
    return 0;
}