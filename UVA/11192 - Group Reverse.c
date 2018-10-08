#include <stdio.h>
#include <string.h>

int main()
{
    char in[111];
    int go,i,j,ln,lnm,ln1;

    while(scanf("%d%*c",&go)==1 && go!=0)
    {
        gets(in);

        char sav[111]={0};

        ln=(strlen(in)) / go;
        ln1=ln;
        lnm=ln-1;

        for(i=0; i<strlen(in); i++)
        {
            if((in[i]>='A' && in[i]<='Z') || (in[i]>='a' && in[i]<='z') || (in[i]>='0' && in[i]<='9') )
            {
                for(j=i; j<ln; j++)
                {
                sav[lnm--]=in[j];
                }
            lnm=j+ln1-1;
            i=j-1;
            ln+=ln1;

            }

        }

        puts(sav);

    }

    return 0;
}
