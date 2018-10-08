#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>

int main()
{
	int tes,sp,g;
	int i,j,k;
	char ch[555],out[555];

	scanf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%d%*c",&g);
		printf("Case %d:\n",i);
		for(k=1; k<=g; k++)
		{
			gets(ch);
			sp=0;
			
			for(j=0; ch[j]!=NULL; j++)
			{
				
				if(ch[j]!=' ')
				{
					printf("%c",ch[j]);
					sp=0;
				}
				else if(ch[j]==' ')
				{
					if(sp==0)
					{
						printf("%c",ch[j]);
						sp++;
					}
					else
					sp++;
				}
			}
			printf("\n");
		}
		if(i<tes)
		printf("\n");

	}


	return 0;
}