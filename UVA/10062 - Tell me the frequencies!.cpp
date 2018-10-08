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
	int l;
	int i,j,k;
	char in[1010];
	gets(in);
	while (1)
	{
		int index[128]={0},srt[1010]={0};
		l=0;
		for(i=0; in[i]!=NULL; i++)
		{
			index[in[i]-32]+=1;
			srt[in[i]-32]+=1;
			if(l<in[i]-32)
				l=in[i]-32;
		}

		sort(srt,srt+l+1);
		for(i=0; i<=l; i++)
		{
			if(srt[i]!=0)
			for(j=l; j>=0; j--)
			{
				if(srt[i]==index[j])
				{
					printf("%d %d\n",j+32,srt[i]);
					index[j]=0;
				}
			}
		}
		if(gets(in)!=NULL)
		printf("\n");
		else
		{
			break;
		}

	}


	return 0;
}
