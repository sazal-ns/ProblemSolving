#include <cstdio>


using namespace std;

int main()
{
	unsigned long long n,sav;
	
	while (scanf("%llu",&n)==1 && n!=0)
	{
		sav=(n*10)/9;

		if(n%9==0)
		{
			printf("%llu %llu\n",sav-1,sav);
		}
		else
		{
			printf("%llu\n",sav);
		}
	}

	return 0;
}