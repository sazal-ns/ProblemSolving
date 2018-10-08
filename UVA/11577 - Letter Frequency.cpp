#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
	long long tes,big;
	long long i,j,k,l;
	char ch;

	scanf("%lld%*c",&tes);
	for(j=1; j<=tes; j++)
	{
		big=0;
		int in[25+5]={0};

		while(true)
		{
			ch=getchar();
			if(ch=='\n')
			{
				ch='1';
				break;
			}
			if(ch>='A' && ch<='Z')
				in[ch-'A']++;
			else if(ch>='a' && ch<='z')
				in[ch-'a']++;
		}
		for(i=0; i<26; i++)
		{
			if(big<in[i])
			{
				big=in[i];
			}
		}
		for(k=0; k<26; k++)
		{
			if(in[k]==big)
				printf("%c",k+'a');
		}
		printf("\n");
	}

	return 0;
}