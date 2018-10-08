#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int prime[10000001],lp=0,cutp[10000001];

void sprime(void)
{
	long long x=10000000,i;
	cutp[0]=cutp[1]=1;
	prime[lp++]=2;
	for(i=3; i<=sqrt(x); i+=2)
	{
		if(cutp[i]==0)
		{
			for(long long j=i*i; j<=x; j+=2*i)
				cutp[j]=1;
		}
	}
	for(long long i=3; i<=x; i+=2)
	{
		if(cutp[i]==0)
			prime[lp++]=i;
	}
}

long long powr[1000001];long long q;
void fact(long long x)
{
	q=0;
	long long i,sq=sqrt(x);
	for(i=0; i<lp && prime[i]<=sq; i++)
	{
		if(x%prime[i]==0)
		{
			while(x%prime[i]==0)
			{
				powr[q++]=prime[i];
				x/=prime[i];
			}
		}
		sq=sqrt(x);
	}
	
	if(x!=1)
	{
		powr[q++]=x;
	}
}

int main()
{
	long long in;
	long long i,j,k;
	sprime();

	while(scanf("%lld",&in)==1 && in>=0)
	{
		fact(in);
		for(i=0; i<q; i++)
		{
			printf("    %lld\n",powr[i]);
		}
		printf("\n");
	}	

	return 0;
}