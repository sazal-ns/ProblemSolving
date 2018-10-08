#include <stdio.h>
#include <math.h>


int main()
{
    long long int tes, l,i,j,key,k,t;
     double amu;
     scanf("%lld",&tes);
     while(tes--)
     {

         long long int che[44]={0};
         t=1;
         j=0;
         scanf("%lld",&che[0]);
         while(t<41)
         {
             scanf("%lld",&che[t++]);
             if(che[t-1]==0)
                break;
             while(che[j]<che[j+1] && j>-1)
             {
                 key=che[j];
                 che[j]=che[j+1];
                 che[j+1]=key;
                 j--;
             }
             j=t-1;;


         }


         amu=0;
         for(i=0; che[i]!=0; i++)
         {
             amu+=2*(pow(che[i],i+1));
         }
         if(amu<5000000)
            printf("%.0lf\n",amu);
        else
            printf("Too expensive\n");
     }

    return 0;
}
