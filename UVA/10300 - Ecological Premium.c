#include<stdio.h>
int main()
{
	long long int a,b,c,d,e,f,z;
	long long int i,j;
	while(scanf("%lld",&a)==1)
	{
		for(i=1;i<=a;i++)
		{
			scanf("%lld",&b);
			f=0;
			z=0;
			for(j=1;j<=b;j++)
			{
				scanf("%lld%lld%lld",&c,&d,&e);
				f=c*e;
				z=z+f;

			}
			printf("%lld\n",z);
		}
	}
	return 0;
}
