#include <stdio.h>
#include <string.h>

int main()
{
    char n[9999];
    long long int i,sum,sav;

    while(gets(n)!=NULL)
    {
        sum=0;
        if(n[0]=='0')
            return 0;

        for(i=0; i<strlen(n); i++)
        {
                sum+=n[i]-'0';
        }
        while(sum>9)
        {
            sav=sum;
            sum=0;
            while(sav!=0)
            {
                sum+=sav%10;
                sav/=10;
            }
        }
        printf("%lld\n",sum);
    }


    return 0;
}
