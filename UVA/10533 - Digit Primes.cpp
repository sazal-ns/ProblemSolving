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
#define pi 2*acos(0.0)
#define eps 1e-7

using namespace std;

int prime[1000010],cut[1000010],lp;

void sprime(void)
{
	vlong p=1000000,i,j,k,sq;
	sq=sqrt(p);
	
	prime[lp++]=2;
	cut[0]=cut[1]=1;

	for(i=3; i<=sq; i+=2)
	{
		if(cut[i]==0)
		{
			for(j=i*i; j<=p; j+=i+i)
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

	for(i=4; i<=p; i+=2)
		cut[i]=1;
}

int dval[1000010],dp,cunt;

void dig(void)
{
	vlong i,j=0,k,val,sum;
	cunt=1;

	for(i=1; i<=1000000; i++)
	{
		sum=0;
	if(prime[j]==i){
		if(prime[j]<10)
		{
	//		dprime[dp++]=prime[j];
			dval[cunt]=dval[cunt-1]+1;
			cunt++;
		}
		else
		{
			val=prime[j];
			while (val>0)
			{
				sum+=val%10;
				val/=10;
			}
			if(cut[sum]==0)
			{
		//		dprime[dp++]=prime[i];
				dval[cunt]=dval[cunt-1]+1;
				cunt++;
			}
			else
			{
				dval[cunt]=dval[cunt-1];
				cunt++;
			}
		}
		j++;
	}
	else{
		dval[cunt]+=dval[cunt-1];
		cunt++; }
	}
}

int main()
{
	
	sprime();
	dig();

	vlong kes,n,p,sqr,res;
	vlong i,j,k;
	
	sf("%lld",&kes);
	for(j=1; j<=kes; j++)
	{
		sf("%lld%lld",&n,&p);
		res=0;
		
		res=dval[p]-dval[n-1];

		pf("%lld\n",res);
	}
	
	return 0;
}