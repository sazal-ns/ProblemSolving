#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <map>

#define sf scanf
#define pf printf
#define vlong long long
#define elf else if

using namespace std;

int main()
{
	int kes,n,p,q,mx,res,grm;
	int i,j,k;
	int arr[111];
	bool wh;

	sf("%d",&kes);
	for(i=1; i<=kes; i++)
	{
		mx=res=0;
		sf("%d%d%d",&n,&p,&q);
		for(j=0; j<n; j++)
		{
			sf("%d",&arr[j]);
		}
		
	
			grm=res=0;
			for(k=0; grm<=q && k<n && k<p; k++)
			{
				if(grm+arr[k]<=q && res<=n)
				{
					grm+=arr[k];
					res++;
					mx=max(mx,res);
				}
			}
		pf("Case %d: %d\n",i,mx);


	}

	return 0;
}