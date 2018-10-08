#include <cstdio>
#include <algorithm>

using namespace std;


long long ag[2000001];

int main()
{
	long long n;
	long long i,j,k;

	while(scanf("%lld",&n)==1 && n!=0)
	{
		for(i=0; i<n; i++)
		{
			scanf("%lld",&ag[i]);
		}

		sort(ag,ag+n);
		
		for(i=0; i<n; i++)
		{
			if(i+1==n)
				printf("%lld",ag[i]);
			else
				printf("%lld ",ag[i]);
		}
		printf("\n");
	}

	return 0;
}