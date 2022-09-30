#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,w=1;
    printf("enter the string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        w++;
    }
    if(i>0)
    w++;
printf("%d",w);
return 0;
}