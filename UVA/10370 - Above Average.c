#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n,z[9999],sum,i,j,k;
    double ava,per;

    scanf("%d",&c);
    for(i=1; i<=c; i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&z[j]);
            sum=sum+z[j];
        }
        ava=sum/n;
        k=0;
        for(j=0; j<n; j++)
        {
            if(z[j]>ava)
                k++;
        }
        per=(100*k*1.0)/n;
        printf("%.3f%%\n",per);
    }

    return 0;
}
