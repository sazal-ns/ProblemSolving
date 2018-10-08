#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

//?M?E??
//xM?Ex?
//?M??E??
//xMy?Ez?

int main()
{
	int tes,flag,x,y,z,m,n,M,E;
	int i,j,k,l;
	char in[111];

	scanf("%d%*c",&tes);
	for(i=1; i<=tes; i++)
	{
		flag=1;
		m=n=x=y=z=M=E=0;
		gets(in);
	
		for(j=0; in[j]!=NULL; j++)
		{
			if(in[j]=='?' || in[j]=='M' || in[j]=='E')
			{
				if(in[0]=='?')
				{
					if(m==0 && n==0)
					{
						if(in[j]=='M')
							m=1;
						else
							x++;
					}
					else if(m==1 && n==0)
					{
						if(in[j]=='E')
							n=1;
						else
							y++;
					}
					else if((m==1 && n==1 ))
						z++;
					if(in[j]=='M')
						M++;
					else if(in[j]=='E')
						E++;

				}
				else
				{
					flag=0;
					break;
				}
				}
			else
			{
				flag=0;
				break;
			}
		}
		
		if(x+y==z && flag==1 && M==1 && E==1 && x>0 && y>0 && z>0)		
			printf("theorem\n");
		else
			printf("no-theorem\n");
	}

	return 0;
}