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
	int tes,num,flag;
	int i,j,k,l;
	char out[9999],in[9999],ch;

	scanf("%d%*c",&tes);
	for(i=1; i<=tes; i++)
	{
		
		l=0;
		gets(in);
		for(j=0; in[j]!=NULL; j++)
		{
			num=0;
			flag=0;
			if(in[j]>='A' && in[j]<='Z')
				ch=in[j];
			else if(in[j]>='0' && in[j]<='9')
			{
				for(k=j; in[k]!=NULL;k++)
				{
					if(isalpha(in[k]))
						break;
					num=num*10+in[k]-'0';
				}
				flag=1;
				j=k-1;
			}
			if(flag==1)
			{
				num+=l;
				for( ; l<num; l++)
					out[l]=ch;
			}
			
		}
		out[l]=NULL;
		printf("Case %d: %s\n",i,out);
	}

	return 0;
}