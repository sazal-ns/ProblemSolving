#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

long long gcd(long a, long b)
{
    if(b==0)
        return a;

    return gcd(b,a%b);
}

int main()
{
    int n;
    int i,j,k;
    long long g;

    while(scanf("%d",&n)==1 && n!=0)
    {
        g=0;
        for(i=1; i<=n; i++)
            for(j=i+1; j<=n; j++)
             g+=gcd(i,j);

        printf("%lld\n",g);
    }

    return 0;
}
