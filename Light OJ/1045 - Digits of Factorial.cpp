#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cctype>
#include <algorithm> 

using namespace std;
      
double a[1000011];

int main()
{
	long long tes,n,b,res;
	long long i,j,k=0;
	double fac=0.0;
	            
	for(j=1; j<=1000000; j++)
		{
			fac+=log10(j);
			a[j]=fac;
		}

	scanf("%lld",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%lld %lld",&n,&b);

		res=a[n]/(log10(b));
		k=floor(res)+1;
		printf("Case %lld: %lld\n",i,k);
	}

	return 0;
}