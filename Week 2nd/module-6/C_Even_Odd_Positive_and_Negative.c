#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int even=0,odd=0,positive=0,negative=0;
    //even
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        //positive and Negative
        if(a>0)
        {
            positive++;
        }
        else if(a<0)
        {
            negative++;
        }
    }
  
    
  
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);
    

    return 0;
}