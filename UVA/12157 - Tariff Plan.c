#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tes, m,j,t,i,mi,mi1;

    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        m=j=0;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&mi);
            m+=(mi/30)*10;
            mi1=mi/30;
            if(mi!=mi1)
                m+=10;

            j+=(mi/60)*15;
            if(mi!=mi/60)
                j+=15;

        }
        if(m<j)
            printf("Case %d: Mile %d\n",i,m);
        else if(j<m)
            printf("Case %d: Juice %d\n",i,j);
        else if(m==j)
            printf("Case %d: Mile Juice %d\n",i,m);

    }

    return 0;
}
