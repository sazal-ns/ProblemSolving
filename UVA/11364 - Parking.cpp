#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int tes,n,sum;
    int i,j,k;
    int x[9999];

    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&x[j]);
        }

        sort(x,x+j);
        for(j=0; j<n-1; j++)
        {
            sum+=x[j]-x[j+1];
        }
        sum*=2;
        printf("%d\n",abs(sum));
    }
}
