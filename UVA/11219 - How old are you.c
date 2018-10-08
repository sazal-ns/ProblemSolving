#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,dd,mm,yy,dd1,mm1,yy1,i;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%*c%d%*c%d%d%*c%d%*c%d",&dd,&mm,&yy,&dd1,&mm1,&yy1);

        dd=dd-dd1;
        mm=mm-mm1;
        yy=yy-yy1;


        if(mm==0)
        {
            if(dd<0)
                yy--;
        }
        else if(mm<0)
               yy--;



        if(yy<0)
        {
            printf("Case #%d: Invalid birth date\n",i);
        }
        else if(yy>130)
        {
            printf("Case #%d: Check birth date\n",i);
        }
        else
        {
            printf("Case #%d: %d\n",i,yy);
        }

    }

    return 0;
}
