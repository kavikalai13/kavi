#include<stdio.h>
int main()
{
char s1[50],s2[50],*str1,*str2;
int i,equal = 0;
printf("Enter The First String: ");
gets(s1);
printf("Enter The Second String: ");
gets(s2);
str1 = s1;
str2 = s2;
while(*str1==*str2)
{
if (*str1=='\0'||*str2=='\0' )
break;
str1++;
str2++;
}
if( *str1 == '\0' && *str2 == '\0' )
printf("\n\nBoth Strings Are Equal.");
else
printf("\n\nBoth Strings Are Not Equal.");
}
