#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);

   if(s>='a'&&s<='z')
   {
    char i=s-32;
    printf("%c",i);
   }
   else if(s>='A'&&s<='Z')
   {
    char I=s+32;
    printf("%c",I);
   }
    return 0;
}