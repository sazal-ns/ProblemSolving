#include <cstdio>
#include <cmath>

int main()
{
	double a,b,c;
	double s,r;

	while(scanf("%lf%lf%lf",&a,&b,&c)==3)
	{
		if(a>0 || b>0 || c>0)
		{
		s=(a+b+c)/2;
		r=sqrt(((s-a)*(s-b)*(s-c))/s);
		printf("The radius of the round table is: %.3lf\n",r);
		}
		else
		{
			printf("The radius of the round table is: 0.000\n");
		}
	}

	return 0;
}