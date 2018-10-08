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
	int res=0,a,b,c;
	int i,j,k;
	char in[111],ch;

	while (gets(in)!=NULL)
	{
		a=0;
		b=0;
		for(i=0; in[i]!=NULL; i++)
		{
			
			if(in[i]>='0' && in[i]<='9')
				b=b*10+in[i]-'0';
			else if(in[i]=='+' || in[i]=='-')
			{
				ch=in[i];
				a=b;
				b=0;
			}
			else if(in[i]=='=')
			{
				if(ch=='+')
					c=a+b;
				else if(ch=='-')
					c=a-b;
			else if(ch=='?')
				c=-1;
				b=0;
			}
		}
		if(c==b)
			res++;
	}
	printf("%d\n",res);

	return 0;
}