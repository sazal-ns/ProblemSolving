#include <stdio.h>
#include <stdlib.h>

long long int f91(long long int n)
{
    if(n==0)
        return 0;
    else if(n<=100)
        return f91(f91(n+11));
    else if(n>=101)
        return n-10;

}

int main()
{
    long long int a;

    while(scanf("%lld",&a)==1 && a!=0)
    {
        printf("f91(%lld) = %lld\n",a,f91(a));
    }

    return 0;
}
