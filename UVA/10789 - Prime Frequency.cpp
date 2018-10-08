#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	long long tes,chen,cheb,ches;
	long long i,j,k,l,m;
	char ch,sav[9999];

	scanf("%lld%*c",&tes);
	for(i=1; i<=tes; i++)
	{
		chen=cheb=ches=-1;
		int num[9999]={0},ba[9999]={0},sa[9999]={0};
		while (true)
		{
			ch=getchar();
			if(ch=='\n')
				break;
			if(ch>='0' && ch<='9')
			{
				if(ch-'0'>chen)
					chen=ch-'0';
				num[ch-'0']+=1;
			}
			else if(ch>='A' && ch<='Z')
			{
				if(ch-'A'>cheb)
					cheb=ch-'A';
				ba[ch-'A']+=1;
			}
			else if(ch>='a' && ch<='z')
			{
				if(ch-'a'>ches)
					ches=ch-'a';
				sa[ch-'a']+=1;
			}

		}
		k=0;
		int flag=1;
		for(j=0; j<=chen; j++)
		{
			flag=1;
			if(num[j]==2)
			{
				sav[k++]=j+'0';
			}
			else if(num[j]>2 && num[j]%2!=0)
			{
				for(l=sqrt(num[j]); l>=2; l--)
				{
					if(num[j]%l==0)
					{
						flag=0;
						break;
					}
					
				}
				if(flag==1)
					sav[k++]=j+'0';
			}
		}

		flag=1;
		for(j=0; j<=cheb; j++)
		{
			flag=1;
			if(ba[j]==2)
			{
				sav[k++]=j+'A';
			}
			else if(ba[j]>2 && ba[j]%2!=0)
			{
				l=sqrt(ba[j]);
				for(l=sqrt(ba[j]); l>=2; l--)
				{
					if(ba[j]%l==0)
					{
						flag=0;
						break;
					}
					
				}
				if(flag==1)
					sav[k++]=j+'A';
			}
		}
		flag=1;
		for(j=0; j<=ches; j++)
		{
			flag=1;
			if(sa[j]==2)
			{
				sav[k++]=j+'a';
			}
			else if(sa[j]>2 && sa[j]%2!=0)
			{
				for(l=sqrt(sa[j]); l>=2; l--)
				{
					if(sa[j]%l==0)
					{
						flag=0;
						break;
					}
					
				}
				if(flag==1)
					sav[k++]=j+'a';
			}
		}
		sav[k]=NULL;
		if(k!=0)
			printf("Case %lld: %s\n",i,sav);
		else
			printf("Case %lld: empty\n",i);
	}
	return 0;
}