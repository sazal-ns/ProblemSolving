#include <stdio.h>
#include <stdlib.h>



int main()
{
    long long int tes,nu,i,j,k,l;

    scanf("%lld",&tes);
    for(i=1; i<=tes; i++)
    {
        long long int a[11]={0};
        scanf("%lld",&nu);
        for(j=1; j<=nu; j++)
        {
            if(j<=9)
                a[j]+=1;
            else
            {
                k=l=j;
                while(k!=0)
                {
                    l%=10;
                    a[l]+=1;
                    k/=10;
                    l=k;
                }

            }
        }
        printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9] );
    }

    return 0;
}
