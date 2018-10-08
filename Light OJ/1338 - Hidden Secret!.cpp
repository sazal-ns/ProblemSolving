#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <cctype>

int main()
{
	int tes;
	int i,j,k;
	char ch;

	scanf("%d%*c",&tes);
	for(i=1; i<=tes; i++)
	{
		int flag =0,f=0;
		int nam[26+5]={0},che[26+5]={0};
		while (1)
		{
			ch=getchar();
			if(f==0)
			if(ch=='\n')
				{
					f=1;
					ch=getchar();
				}

			if(f==0)
			{	
				if(ch>='A' && ch<='Z')
					nam[ch-'A']++;
				else if(ch>='a' && ch<='z')
					nam[ch-'a']++;
			}
			else if(f==1)
			{
				if(ch=='\n')
					break;
				if(flag==0)
					if(ch>='A' && ch<='Z')
					che[ch-'A']++;
				else if(ch>='a' && ch<='z')
					che[ch-'a']++;
			}
		}
		for(k=0; k<26; k++)
			if(nam[k]!=che[k])
				flag=1;
		if(flag==0)
			printf("Case %d: Yes\n",i);
		else if(flag==1)
			printf("Case %d: No\n",i);
	}

	return 0;
}