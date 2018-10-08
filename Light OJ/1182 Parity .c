#include <stdio.h>
#include <stdlib.h>

int main()
{
    static long long int a,b,c,i,d;

    scanf("%lld",&a);
    for(i=1; i<=a; i++)
    {
        d=0;
        scanf("%lld",&b);
        c=b;
        while(b!=0)
        {
            b/=2;
            if(b*2!=c)
            {
                d++;
            }
            c=b;
        }
        if(d%2==0)
        {
            printf("Case %d: even\n",i);
        }
        else
        {
            printf("Case %d: odd\n",i);
        }
    }

    return 0;
}
