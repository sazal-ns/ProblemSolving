#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>

using namespace std;

int prime[1000001],lp,cutp[1000001];

void sprime(void)
{
	int x=1000000;
	cutp[0]=cutp[1]=1;
	prime[lp++]=2;
	int i,j,k;
	for(i=3; i<=sqrt(x); i+=2)
		if(cutp[i]==0)
			for(j=i*i; j<=x; j+=2*i)
				cutp[j]=1;

	for(i=3; i<=x; i+=2)
		if(cutp[i]==0)
			prime[lp++]=i;
}

int powr[1000001],q,p;
void fact(long long x)
{
	q=p=0;
	long long i,j,k,sq=sqrt(x);
	for(i=0; i<=x && prime[i]<=sq; i++)
		if(x%prime[i]==0)
		{
			while(x%prime[i]==0)
			{
				powr[q++]=prime[i];
				x/=prime[i];
			}
			p++;
		}
			sq=sqrt(x);
	if(x!=1)
	{
		powr[q++]=x;
		p++;
	}
}

int main()
{
	long long in;
	long long i,j,k;
	
	sprime();
	while(scanf("%lld",&in)==1 && in!=0)
	{
		fact(in);
			printf("%lld : %d\n",in,p);
		
	}

	return 0;
}