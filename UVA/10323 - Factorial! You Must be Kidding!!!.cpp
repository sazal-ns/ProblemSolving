#include <cstdio>

using namespace std;


long long fact (long long n)
{
	long long res;
	if(n==0)
		return 1;
	
		return res=n*fact(n-1);

}

int main()
{
	long long int n;

	while(scanf("%lld",&n)==1)
	{
		if ((n < 0 && (-1 * n) % 2 == 1) || n > 13) 
			printf("Overflow!\n");
		 else if ((n < 0 && (-1 * n) % 2 == 0) || n < 8) 
			 printf("Underflow!\n");
		else
			printf("%lld\n",fact(n));
		
	}

	return 0;
}