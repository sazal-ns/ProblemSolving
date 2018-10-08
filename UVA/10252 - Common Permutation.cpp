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
	int i,j,k;
	char a[1010], b[1010];

	while (gets(a)!=NULL)
	{
		gets(b);
		
		int ia[26+4]={0}, ib[26+4]={0};
		for(i=0; a[i]!=NULL; i++)
		{
			ia[a[i]-'a']+=1;
		}
		for(i=0; b[i]!=NULL; i++)
		{
			ib[b[i]-'a']+=1;
		}
		for(i=0; i<26; i++)
		{
			if(ia[i]!=0 && ib[i]!=0)
				if(ia[i]<=ib[i])
					for(j=1; j<=ia[i]; j++)
						printf("%c",i+'a');
				else if(ia[i]>ib[i])
					for(j=1; j<=ib[i]; j++)
						printf("%c",i+'a');

		}
		printf("\n");


	}

	return 0;
}