#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long long tes,xn,yn,x,y;
    long long i,j,k;

    while(scanf("%lld",&tes)==1 && tes!=0)
    {
        scanf("%lld%lld",&xn,&yn);
        for(i=1; i<=tes; i++)
        {
            scanf("%lld%lld",&x,&y);
            x-=xn;
            y-=yn;
            if(x*y==0)
                printf("divisa\n");
            else if(x>0 && y>0)
                printf("NE\n");
            else if(x<0 && y>0)
                printf("NO\n");
            else if(x>0 && y<0)
                printf("SE\n");
            else if(x<0 && y<0)
                printf("SO\n");
        }
    }

    return 0;
}
