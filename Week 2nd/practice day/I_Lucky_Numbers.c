#include<stdio.h>
int main()
{
    int a, b;
    
    scanf("%d",&a);
    
     int x=a%10;
       b=a/10;
     int y=b%10;
     if(x%y==0||y%x==0)
     {
         printf("YES");
     }
     else
     {
         printf("NO");
     }

    return 0;
}