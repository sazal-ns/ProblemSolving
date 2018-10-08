#include <cstdio>
#include <cmath>

using namespace std;

//10^((1/n) log(x)) 

int main()
{
	//unsigned long long n,p;
	//unsigned long long i,j,k;
	double a,b,c,n,p,i;

	while(scanf("%lf%lf",&n,&p)==2)
	{
		b=a=c=0.0;
		a=1.0/n;
		b=log10(p);
		
		c=a*b;

		i=pow(10.0,c);

		printf("%.0lf\n",i);
	}

	return 0;
}