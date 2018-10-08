#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

char in[99999];

int main()
{
	long long tes;
	long long i,j,k;
	char ch;

	while(scanf("%lld%*c",&tes)==1)
	{
		int al[26+4]={0};
		int srt[26+4]={0};
		for(i=1; i<=tes; i++)
		{
			gets(in);
			for(j=0; in[j]!=NULL; j++)
			{
				if(in[j]>='A' && in[j]<='Z')
				{
					al[in[j]-'A']+=1;
					srt[in[j]-'A']+=1;
				}
				else if(in[j]>='a' && in[j]<='z')
				{
					al[in[j]-'a']+=1;
					srt[in[j]-'a']+=1;
				}
			}
		}
		sort(srt,srt+26);
		for(j=26; j>=0; j--)
		{
			if(srt[j]!=0 && srt[j]!=srt[j-1])
			for(k=0; k<=26; k++)
			{
				if(al[k]!=0)
				if(srt[j]==al[k])
				{
					ch=k+'A';
					printf("%c %d\n",ch,al[k]);
				}
			}
		}
	}

	return 0;
}