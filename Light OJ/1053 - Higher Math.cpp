#include <cstdio>

int main()
{
	long long tes,n,d,r,t,ro,ro1;
	int i,j,k;

	scanf("%lld",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%lld%lld%lld",&n,&d,&r);
		if(n*n+d*d==r*r)
			printf("Case %d: yes\n",i);
		else if(n*n+r*r==d*d)
			printf("Case %d: yes\n",i);
		else if(d*d+r*r==n*n)
			printf("Case %d: yes\n",i);
		else
		{
			printf("Case %d: no\n",i);
		}
	}

	return 0;
}