#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can,dri,hand,sav,k,i;

    for(i=1; i<=10; i++)
    {
        scanf("%d",&can);
        dri=hand=0;
        if(can==0)
            break;

        for(k=1; ;k++)
        {
            dri+=can/3;
            can=(can%3)+(can/3);
            if(can==2)
            {
                dri+=1;
                break;
            }
            if(can==1)
                break;

        }


        printf("%d\n",dri);

    }

    return 0;
}
