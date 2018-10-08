#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int tes,n,d,tim[9999],len,don;
	int i,j,k;
	char sub[111][111],deu[111];

	scanf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%d",&n);
		for(j=0; j<n; j++)
		{
			scanf("%s%*c%d",sub[j],&tim[j]);
		}
		scanf("%d%*c",&d);
		gets(deu);
		don=0;
		for(k=0; k<n; k++)
		{
			j=len=0;
			if(deu[j]==sub[k][j] && strlen(deu)==strlen(sub[k]))
			{
				for( ;sub[k][j]!=NULL; j++)
				{
					if(deu[j]!=sub[k][j])
						break;
					else
					{
						len++;
					}
				}
				if(len==strlen(sub[k]))
				{
					don=1;
					break;
				}
			}

		}
		if(tim[k]<=d && don==1)
				printf("Case %d: Yesss\n",i);
			else if(tim[k]<=d+5 && don==1)
				printf("Case %d: Late\n",i);
			else
				printf("Case %d: Do your own homework!\n",i);
	}

	return 0;
}