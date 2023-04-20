#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
  int remainder1=A%B;
  int  remainder2=B%A;
   if(remainder1==0 || remainder2==0)

   {
    printf("Multiples");
   }
   else 
   {
    printf("No Multiples");
   }
    return 0;
}