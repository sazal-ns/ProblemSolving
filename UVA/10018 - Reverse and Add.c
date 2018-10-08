#include <stdio.h>

int main()
{
    static long long int a,b,c,sum,i,j,n;

    scanf("%lld", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld", &a);
        j=0;

        while(1)
        {

        b=a;
        sum=0;
        while(b != 0)
        {
            sum=sum*10+b%10;
            b=b/10;
        }
        if(a==sum)
        {
            printf("%lld %lld\n",j,a);
            break;
        }
        else
        {
            a=sum+a;
            j++;
        }
        }
    }

    return 0;
}
