#include <stdio.h>
#include <string.h>

int main()
{
    char g[11][111];
    int i,j,tes,t,ran[11];

    scanf("%d%*c",&tes);
    for(t=1; t<=tes; t++)
    {
        int l1=0;
      for(i=0; i<10; i++)
        {
            scanf("%s",g[i]);
            scanf("%d",&ran[i]);

            if(l1<ran[i])
                l1=ran[i];
        }
        printf("Case #%d:\n",t);
        for(j=0; j<10; j++)
        {
            if(ran[j]==l1)
                puts(g[j]);
        }


    }


    return 0;
}
