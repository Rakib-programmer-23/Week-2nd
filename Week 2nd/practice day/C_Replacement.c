#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int val1=1;
    int val2=2;
    int val3=0;
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
          ar[i]=val1;
        }
        else if(ar[i]<0)
        {
            ar[i]=val2;
        }
        else if(ar[i]==0)
        {
            ar[i]=val3;
        }
        printf("%d ",ar[i]);
    }

return 0;
}