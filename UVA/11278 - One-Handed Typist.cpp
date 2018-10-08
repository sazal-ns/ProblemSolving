#include <cstdio>
#include <cstring>
#include <string.h>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

char ch[127+3]="                                 !_#QJM-P?F}v[g'/123qjlmfpKkV]G\"@&IX(^AEHUTDCWNYB$>*OS<%ZR);\\=L{`7ix96aehutdcwnyb4.8os,5zr0:|+~ ";

int main()
{
	int i,j,k;
	char in[9999];

	while (gets(in)!=NULL)
	{
		for(i=0; in[i]!=NULL; i++)
		{
			j=in[i];
			printf("%c",ch[j]);
		}
		printf("\n");
	}
	return 0;
}