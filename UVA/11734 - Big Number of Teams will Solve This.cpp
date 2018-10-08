#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int tes;
	int i,j,k;
	char jud[20+5],pro[20+5],sav[20+5];

	scanf("%d%*c",&tes);
	for(i=1; i<=tes; i++)
	{
		gets(pro);
		gets(jud);

		if(strcmp(pro,jud)==0)
			printf("Case %d: Yes\n",i);
		else if(strlen(pro)==strlen(jud) && strcmp(pro,jud)!=0 )
			printf("Case %d: Wrong Answer\n",i);
		else
		{
			k=0;
			for(j=0; pro[j]!=NULL; j++)
			{
				if(pro[j]!=' ')
					sav[k++]=pro[j];
			}
			sav[k]=NULL;
			if(strcmp(sav,jud)==0)
				printf("Case %d: Output Format Error\n",i);
			else if(strlen(sav)==strlen(jud) && strcmp(sav,jud)!=0 )
				printf("Case %d: Wrong Answer\n",i);
			else
				printf("Case %d: Wrong Answer\n",i);
		}
	}

	return 0;
}
