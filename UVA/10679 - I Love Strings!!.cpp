#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <string.h>

int main()
{
	int tes,q;
	int i,j,k;
	char in[100010],out[1010];

	scanf("%d%*c",&tes);
	while(tes--)
	{
		gets(in);
		scanf("%d%*c",&q);
		for(i=1; i<=q; i++)
		{
			gets(out);
			if(strncmp(in,out,strlen(out))==0)
				printf("y\n");
			else 
				printf("n\n");
		}
	}


	return 0;
}