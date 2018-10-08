#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int tes,i,j,c,ip1,ip2,ip3,ip4,aa,rr,pp,ff,ipb1,ipb2,ipb3,ipb4;
    //char con[1];
    scanf("%lld",&tes);
    for(i=1; i<=tes; i++)
    {
        scanf("%lld%*c%lld%*c%lld%*c%lld%*c",&ip1,&ip2,&ip3,&ip4);
        scanf("%lld%*c%lld%*c%lld%*c%lld%*c",&ipb1,&ipb2,&ipb3,&ipb4);
        aa=0;
        rr=0;
        pp=0;
        ff=0;
        j=1;
        while(ipb1!=0)
        {
         c=ipb1%10;
        aa=aa+c*j;
        j=j*2;
        ipb1=ipb1/10;
        }
            j=1;
        while(ipb2!=0)
        {
         c=ipb2%10;
        rr=rr+c*j;
        j=j*2;
        ipb2=ipb2/10;
        }
j=1;
        while(ipb3!=0)
        {
         c=ipb3%10;
        pp=pp+c*j;
        j=j*2;
        ipb3=ipb3/10;
        }
j=1;
        while(ipb4!=0)
        {
         c=ipb4%10;
        ff=ff+c*j;
        j=j*2;
        ipb4=ipb4/10;
        }


        if(aa==ip1 && rr==ip2 && pp==ip3 && ff==ip4)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }

    }


    return 0;
}
