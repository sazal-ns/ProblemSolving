#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int mel,year;
    while(scanf("%lld",&year)==1 && year!=-1)
    {
        mel=year/2;
        mel+=year;
        if(year==0)
            printf("0 1");
        printf("%lld %lld\n",mel,mel+year);
    }
    return 0;
}
