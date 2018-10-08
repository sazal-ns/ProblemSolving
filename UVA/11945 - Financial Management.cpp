#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
	int tes;
	double n,total;
	int i,j,k;

	scanf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		total=0.0;
		for(j=1; j<=12; j++)
		{
			scanf("%lf",&n);
			total+=n;
		}
		total/=12;
		int mo,sav;
		if(total>=1000.00)
		{
			mo=total;
			mo%=1000;
			sav=total-mo;
			sav/=1000;
			printf("%d $%d,%.2lf\n",i,sav,total-(sav*1000));
		}
		else
		{
			printf("%d $%.2lf\n",i,total);
		}
	}

	return 0;
}