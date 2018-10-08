#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	char sv[9999],sv2[9999],ch,br[5]={'d','o','n','e'};
	int i,j,k,flag;

	while (1)
	{
		j=i=0;
		flag=0;
		while(1)
		{
			
			ch=getchar();
			if(ch=='\n')
				break;
			if(ch>='a' && ch<='z')
				sv[i++]=ch;
			else if(ch>='A' && ch<='Z')
				sv[i++]=ch+32;
		}
		sv[i]=NULL;
		if(strcmp(sv,br)==0)
			break;
		
		for(i=strlen(sv)-1; i>=0; i--)
		{
			sv2[j++]=sv[i];
		}
		sv2[j]=NULL;

		if(strcmp(sv,sv2)!=0)
			flag=1;
		
		
		if(flag==1)
			printf("Uh oh..\n");
		else 
			printf("You won't be eaten!\n");
		
	}

	return 0;
}