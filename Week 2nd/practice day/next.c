#include<stdio.h>
int main()
{
    char A,Next,a;
    scanf("%c",&A);
    if(A=='z')
    {
        printf("a");
    }
    else if(A=='Z')
    {
        printf("A");
    }
    
   while(A>='a'&&A<='y'|| A>='A'&&A<='Y')
   {
       printf("%c",A+1);
       break;
       
   }

    return 0;
}