#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        
    }
    if(sum<0)
{
    sum=sum*(-1);

}
    printf("%lld",sum);

    return 0;
}