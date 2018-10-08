#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	long long tes,t1,t2,f,a,av,res,ct[5];
	int i,j,k;

	scanf("%lld",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%lld%lld%lld%lld%lld%lld%lld",&t1,&t2,&f,&a,&ct[0],&ct[1],&ct[2]);

		sort(ct,ct+3);

		av=(ct[1]+ct[2])/2;

		res=t1+t2+f+a+av;
		if(res>=90)
		{
			printf("Case %d: A\n",i);
		}
		else if(res>=80 && res<90)
		{
			printf("Case %d: B\n",i);
		}
		else if(res>=70 && res<80)
		{
			printf("Case %d: C\n",i);
		}
		else if(res>=60 && res<70)
		{
			printf("Case %d: D\n",i);
		}
		else if(res<60)
		{
			printf("Case %d: F\n",i);
		}
	}
	

	return 0;
}