#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[16],b,c,d,e,f[2],g=0,h,i,j,k,l=0,n;

    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        b=c=d=e=0;
        g=h=i=k=l=0;
        scanf("%d%d%d%d",&b,&c,&d,&e);

        for(i=3; i>=0; i--)
        {
            a[i]=b%10;
            b=b/10;
        }
        for(i=7; i>=4; i--)
        {
            a[i]=c%10;
            c=c/10;
        }
        for(i=11; i>=8; i--)
        {
            a[i]=d%10;
            d=d/10;
        }
        for(i=15; i>=12; i--)
        {
            a[i]=e%10;
            e=e/10;
        }
        for(i=0; i<=15; i++)
        {
            e=i%2;
            if(e==0)
            {
           h=a[i]*2;
           if(h>=10)
           {
               for(c=0; c<=2; c++)
               {
                   f[c]=h%10;
                   h=h/10;
               }
               h=f[0]+f[1];

           }
           l=l+h;
            }
        }
        g=a[1]+a[3]+a[5]+a[7]+a[9]+a[11]+a[13]+a[15];

        k=g+l;
                   b=k%10;

               if(b!=0)
               {
                   printf("Invalid\n");

               }
               else
               {
                   printf("Valid\n");

               }


    }
    return 0;
}
