#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

#define sf scanf
#define pf printf
#define vlong long long
#define elf else if

using namespace std;

int in[100000],neg[100000],pos[100000];

int main()
{
	vlong tes,n,res,ne,po;
	vlong i,j,k;
	

	while (sf("%lld",&tes)==1 && tes != 0)
	{
		ne=po=res=0;
		for(i=0; i<tes; i++)
		{
			sf("%d",&in[i]);
			if(i<1)
			{
				if(in[i]>=0)
				{
					pos[i]=in[i];
					neg[i]=0;
				}
				else
				{
					pos[i]=0;
					neg[i]=-1*in[i];
				}
			}
			else
			{
				if(in[i]>=0)
				{
					if(pos[i-1]==0)
					{
						pos[i]=in[i];
						neg[i]=neg[i-1];
					}
					else
					{
						pos[i]=pos[i-1]+in[i];
						neg[i]=neg[i-1];
					}
				}
				else
				{
					if(neg[i-1]==0)
					{
						neg[i]=-1*in[i];
						pos[i]=pos[i-1];
					}
					else
					{
						neg[i]=-1*in[i]+neg[i-1];
						pos[i]=pos[i-1];
					}
				}
			}
		}
		for(i=0; i<tes; i++)
		{
			res+=abs(pos[i]-neg[i]);
		}
		pf("%lld\n",res);

	}

	return 0;
}