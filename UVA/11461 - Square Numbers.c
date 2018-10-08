#include <stdio.h>
#include <math.h>

int main()
{
    long long int a,b,c,i,cou;
    while(scanf("%lld%lld",&a,&b)==2 && a!=0 && b!=0)
    {
        cou=c=0;
        for(i=a; i<=b; i++)
        {
            c=sqrt(i);
            if(i==c*c)
             cou++;
        }
        printf("%lld\n",cou);

    }
    return 0;
}
