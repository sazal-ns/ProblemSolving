#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,a,b,c;
    int i;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && b>c)
            printf("Case %d: %d\n",i,b);
        if(c>b && b>a)
            printf("Case %d: %d\n",i,b);
        if(a>c && c>b)
            printf("Case %d: %d\n",i,c);
        if(b>c && c>a)
            printf("Case %d: %d\n",i,c);
        if(b>a && a>c)
            printf("Case %d: %d\n",i,a);
        if(c>a && a>b)
            printf("Case %d: %d\n",i,a);

    }

    return 0;
}
