#include<stdio.h>
int main()
{
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    int w = 0;
    int k = 0;
    int ans;
    do
    {
        if(eye >= 1 && mouth >= 1 && body >= 1)
        {
            eye--;
            body--;
            mouth--;
            k++;
        }
        else if(eye >= 2 && body >= 1) 
        {
            eye -= 2;
            body--;
            w++;
        }
    }
    while(eye >= 2 && body >= 1 || eye >= 1 && mouth >= 1 && body >= 1);
    ans = w + k;
    printf("%d", ans);
    return 0;
}