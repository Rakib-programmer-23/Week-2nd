#include<stdio.h>
int main()
{
    int x,n;
    int corr=1999;
    int a;
    for(int i=1000;i<=9999;i++)
    {
        scanf("%d",&a);
        if(1999%a==0)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
