#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
	int tes, i, j, k;
	int n,m, pay[111];
	char paych[111], ch;
	double cost;

	scanf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		cost=0.0;
		scanf("%d%*c",&n);
		for(j=0; j<n; j++)
		{
			scanf("%c%d%*c",&paych[j],&pay[j]);
		}
		paych[j]=NULL;

		scanf("%d%*c",&m);
		for(k=1; k<=m; k++)
		{
			while (ch=getchar())
			{
				if(ch==10)
					break;
				else
				{
					for(j=0; paych[j]!=NULL; j++)
					{
						if(paych[j]==ch)
							cost=cost+pay[j];
					}

				}
			}
		}
		printf("%.2lf$\n",cost/100);

	}


	return 0;
}