#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000+11];
    int i;

    while(scanf("%s",a)==1 && a[0]!='0' || a[1]!='\0')
    {
        int res=0,sa=0;
        for(i=0; i<=strlen(a)-1; i++)
        {
            sa=a[i]-'0';
            sa=res*10+sa;
            res=sa%11;
        }
        if(res==0)
        {
           printf("%s is a multiple of 11.\n",a);
        }

        else
        {
           printf("%s is not a multiple of 11.\n",a);
        }

    }

    return 0;
}
