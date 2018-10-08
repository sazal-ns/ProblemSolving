#include <cstdio>
#include <cmath>

int main()
{
	double a,b,c;
	double s,res;

	while(scanf("%lf%lf%lf",&a,&b,&c)==3)
	{
		s=(a+b+c)/2;
		a=s-a;
		b=s-b;
		c=s-c;
		res=sqrt(s*a*b*c);
		s=4.0/3.0;
		res*=s;
		if(res>0)
		printf("%.3lf\n",res);
		else
		{
			printf("-1.000\n");
		}
	}

	return 0;
}