#include<stdio.h>
int main()
{
char s[100];
char *p;
int c=0;
p=&s[0];
printf("Enter any string");
gets(s);
while(*p!='\0')
{
    if(*p!=' ')
{
c++;
}
p++;
}
printf("%d",c);
}
