#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <algorithm>

#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b

char ch[2000002];

int main()
{
	int in,dis,flag,d,r,z;
	int i,j,k;

	while(scanf("%d%*c",&in)==1 && in!=0)
	{
		flag=d=z=r=j=0;
		k=0;
		dis=2000022;
		gets(ch);
		for(i=0; i<in; i++)
		{
			if(ch[i]=='D')
			{
				if(d==1)
				{
					k=0;
				}
				if(r==1 && d==0)
					j=1;
				d=1;
			}
			else if(ch[i]=='R')
			{
				if(r==1)
					k=0;
				if(d==1 && r==0)
					j=2;
				r=1;
			}
			else if(ch[i]=='Z')
			{
				z=1;
				k=0;
			}

			if(d==1 && r==0)
				k++;
			else if(r==1 && d==0)
				k++;
			if(r==1 && d==1)
			{
				flag=1;
				dis=min(dis,k);
				r=d=0;
				k=1;
				if(j==1)
					d=1;
				else if(j==2)
					r=1;
			}

		}
		if(z==1 || flag==0)
			printf("0\n");
		else
		printf("%d\n",dis);
	}

	return 0;
}