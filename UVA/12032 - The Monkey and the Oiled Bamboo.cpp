#include <cstdio>
#include <algorithm>
#include <cmath>

#define sf scanf
#define pf printf

using namespace std;

int main()
{
	long long tes,n,r[100000],mx,ds,res;
	long long i,j,k;
	bool flag;

	sf("%lld",&tes);
	for(i=1; i<=tes; i++)
	{
		mx=0;
		r[0]=0;
		flag=true;
		sf("%lld",&n);
		for(j=1; j<=n; j++)
		{
			sf("%lld",&r[j]);
			res=abs(r[j-1]-r[j]);
			mx=max(mx,res);
		}
		res=mx;
		for(k=0; k<n; k++)
		{
			ds=abs(r[k]-r[k+1]);
			if(ds==mx)
				mx-=1;
			else if(ds>mx)
			{
				flag=false;
				res+=1;
				break;
			}
		}
		pf("Case %lld: %lld\n",i,res);
	}


	return 0;
}