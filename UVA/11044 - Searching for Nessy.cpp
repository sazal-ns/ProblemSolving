#include <cstdio>

using namespace std;

int main()
{
	int tes,n,m,s;
	int i,j,k;

	scanf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%d%d",&n,&m);
		s=n/3;
		s*=m/3;
		printf("%d\n",s);
	}

	return 0;
}