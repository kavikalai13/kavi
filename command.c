#include<stdio.h>
int main(int argc,char *argv[])
{
    printf("hello\n");
printf(" argument is %s",argv[0]);
    if(argc<2)
    {
        printf("no arguments passed");

    }
    else
    {
        printf("first argument is %s",argv[1]);
    }
    return 0;
}