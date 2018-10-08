#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>

#define vlong long long
#define sf scanf
#define pf printf
#define elf else if

using namespace std;

int prime[1000000],cut[1000000],lp;

void aprime(void)
{
	vlong p=1000000,i,j,k,sq;
	sq=sqrt(p);
	
	prime[lp++]=2;
	cut[0]=cut[1]=1;

	for(i=3; i<=sq; i+=2)
	{
		if(cut[i]==0)
		{
			for(j=i*i; j<=p; j+=i*i)
			{
				cut[j]=1;
			}
		}
	}
	for(i=3; i<=p; i+=2)
	{
		if(cut[i]==0)
			prime[lp++]=i;
	}
}


int main()
{
	aprime();
	return 0;
}