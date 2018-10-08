#include <cstdio>
#include <cmath>

using namespace std;


int main ()
{
    int tes;
	int i,j,k;
	double r,a,b;
    scanf("%d", &tes);
    for (i=1;i<=tes;i++)
    {
        scanf("%lf",&r);

		a=(2*acos(0.0))*r*r;
        b= 4*r*r;

		printf("Case %d: %.2f\n",i,b-a);
    }
    return 0;
}