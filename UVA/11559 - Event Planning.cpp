#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n,b,h,w,p,a;
	int i,j,k;
	int buj,fbuj;

	while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
	{
		fbuj=9999110088;
		buj=0;
		
		for(j=1; j<=h; j++)
		{
			scanf("%d",&p);
			for(i=1; i<=w; i++)
			{
				scanf("%d",&a);
				if(a>=n)
					buj=n*p;
			}
			if(buj<=fbuj)
				if(buj!=0)
				fbuj=buj;
		}
		if(fbuj<=b)
			printf("%d\n",fbuj);
		else
		{
			printf("stay home\n");
		}
	}

	return 0;
}