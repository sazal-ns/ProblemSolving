#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int ch[4000044],total[4000044];

int main()
{
	long long tes,m,car,res;
	long long i,j,k;

	scanf("%lld",&tes);
	for(i=1; i<=tes; i++)
	{
		car=res=k=0;
		scanf("%lld",&m);
		for(j=0; j<m*2; j++)
		{
			scanf("%d",&ch[j]);
		}
		for(j=(m*2)-1; j>0; j-=2)
		{
			res=car+ch[j]+ch[j-1];
			if(res>9)
			{
				total[k++]=res%10;
				car=res/10;
			}
			else
			{
				total[k++]=res;
				car=0;
			}
			
		}
		for(j=k-1; j>=0; j--)
			printf("%lld",total[j]);
		printf("\n");
		if(i<tes)
			printf("\n");

	}


	return 0;
}