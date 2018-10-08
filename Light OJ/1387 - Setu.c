#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,p,te,te1,amu,don=0;
    char ch[100];

    scanf("%d",&te);
    for(i=1; i<=te; i++)
    {
        p=don=0;
        scanf("%d%*c",&te1);
        for(j=1; j<=te1; j++)
        {
        scanf("%s",ch);
        if(ch[0]=='d'){
            scanf("%d%*c",&amu);
            don=don+amu;
        }
        else
        {
            if(p==0)
            {
                printf("Case %d:\n",i);
                p++;
            }
            printf("%d\n",don);
        }

    }

    }
    return 0;
}
