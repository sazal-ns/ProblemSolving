#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tes, n,i,j,in,k;
    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        int ar[15]={0};
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            k=j;
            scanf("%d",&ar[j]);

            while(k>0)
            {
                if(ar[k-1]>ar[k])
                {
                in=ar[k-1];
                ar[k-1]=ar[k];
                ar[k]=in;
                }
                k--;
            }

        }
        n=(n/2);
        printf("Case %d: %d\n",i,ar[n]);

    }

    return 0;
}
