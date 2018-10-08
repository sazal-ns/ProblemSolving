#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int tes;
    int i,j,k;
    double c,d;

    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        scanf("%lf%lf",&c,&d);
        c+=5*d/9;
        printf("Case %d: %.2lf\n",i,c);
    }

    return 0;
}
