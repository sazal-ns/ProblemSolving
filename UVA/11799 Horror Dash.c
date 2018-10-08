#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tes,a,h,i,j,d;

    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        d=0;
        scanf("%d",&a);
        for(j=1; j<=a; j++)
        {
            scanf("%d",&h);
            if(d<h)
                d=h;
        }
        printf("Case %d: %d\n",i,d);
    }

    return 0;
}
