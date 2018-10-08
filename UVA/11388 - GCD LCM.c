#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int tes, g, l;

    scanf("%lld",&tes);
    while(tes--)
    {
        scanf("%lld%lld",&g,&l);

        if(l%g==0)
            printf("%lld %lld\n",g,l);
        else
            printf("-1\n");
    }

    return 0;
}
