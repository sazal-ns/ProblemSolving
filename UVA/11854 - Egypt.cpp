#include <cstdio>

using namespace std;

int main()
{
	long long tes,n,d,r,t,ro,ro1;
	int i,j,k;

	
	while(scanf("%lld%lld%lld",&n,&d,&r)==3 && n!=0 && d!=0 && r!=0)
	{
		if(n*n+d*d==r*r)
			printf("right\n");
		else if(n*n+r*r==d*d)
			printf("right\n");
		else if(d*d+r*r==n*n)
			printf("right\n");
		else
		{
			printf("wrong\n");
		}
	}

	return 0;
}