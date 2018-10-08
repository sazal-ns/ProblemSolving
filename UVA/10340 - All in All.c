#include <stdio.h>
#include <string.h>

int main()
{
    char s[9999], t[9999]
  long long int i,j,k;

    while(scanf("%s%*c",s)!=EOF)
    {
        scanf("%s%*c",t);

        for(i=0; i<q; i++)
        {
            k=check(s[i]);
            s[i]=NULL;
            t[i]=NULL;
            j=j+k;
        }
        if(j==q)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}
