#include<stdio.h>
int z[99999]={0};
int main()
{

	long long int i,j,l,n,m,x,y,k,w;
	l=0;

	while(scanf("%lld",&m)==1)
	{
	l=0;
	w=0;
	for(i=0;i<m;i++)
	{
		scanf("%lld",&z[i+1]);
		l++;
		for(k=l;k>0;k--)
		{
		x=z[k-1];
		y=z[k];
		if(z[k]<z[k-1])
		{
			z[k]=x;
			z[k-1]=y;
			w++;
		}
		}

	}
		printf("Minimum exchange operations : %lld\n",w);
	}
	return 0;
}
