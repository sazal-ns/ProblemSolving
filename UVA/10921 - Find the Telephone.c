#include <stdio.h>
#include <string.h>

int main()
{
    char che[26]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};
    char in[40];
    int i,j,k;

    while(gets(in)!=NULL)
    {
        char phon[40]={0};
        for(i=0; i<strlen(in); i++)
        {
            if(in[i]=='1' || in[i]=='-' || in[i]=='0')
            {
                phon[i]=in[i];
            }
            else if(in[i]>='A' && in[i]<='Z')
            {
                k=in[i]-'A';
                phon[i]=che[k];
            }
        }

        puts(phon);

    }


    return 0;
}
