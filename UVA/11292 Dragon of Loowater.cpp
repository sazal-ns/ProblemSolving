#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	long long int h[22222],s[22222];
	long long int tes,h1, n,m, k,d,res,don,n1;
	long long int i,j;
	int t=0;

	while(scanf("%lld %lld",&n,&m)==2 && n!=0 && m!=0)
	{
			j=0;
			res=0;
			h1=m;
			n1=n;
			don=0;
		for(i=0; i<n; i++)
			scanf("%lld",&h[i]);
		for(i=0; i<m; i++)
			scanf("%lld",&s[i]);
		
		if(n>m)
			t=1;
		else
			{
			sort(h,h+n);
			sort(s,s+m);

			for(i=0; i<m; i++)
			{
				if(n>h1 || n==0 || h1==0)
				{
					break;
				}
				else if(h[j]<=s[i])
				{
					t=0;
					res+=s[i];
					n--;
					j++;
					don++;
				}
				
				h1--;
			
			}
		}
		if(t==0 && don==n1)
			printf("%lld\n",res);
		else
			printf("Loowater is doomed!\n");
	}

	return 0;
}