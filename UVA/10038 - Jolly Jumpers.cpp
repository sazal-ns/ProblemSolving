#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	long long n,sv,s[9999],in,jo,def,d;
	long long i,j,k;

	while(scanf("%lld",&n)==1)
	{
		jo=0;
		j=0;
		for(i=1; i<=n; i++)
		{
			scanf("%lld",&in);
			if(i>1)
			{
				s[j++]=abs(sv-in);
				sv=in;
				
			}
			else
			{
				sv=in;
			}

		}

		sort (s,s+j);

		for(i=0; i<n-1; i++)
		{
			if(s[i]==s[i+1])
			{
				jo=1;
				break;
			}
		}

		if(jo==0)
			printf("Jolly\n");
		else
		{
			printf("Not jolly\n");
		}
	}

	return 0;
}
