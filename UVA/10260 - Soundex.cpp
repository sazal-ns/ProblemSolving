#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	bool flag1,flag2,flag3,flag4,flag5,flag6;
	long long i,j,k;
	char in[9999];

	while(gets(in)!=NULL)
	{
		flag1=flag2=flag3=flag4=flag5=flag6=false;

		for(i=0; in[i]!=NULL; i++)
		{
			if((in[i]=='B' || in[i]=='F' || in[i]=='P' || in[i]=='V') && flag1==false)
			{
				flag1=true;
				flag2=false;
				flag3=false;
				flag4=false;
				flag5=false;
				flag6=false;
				printf("1");
			}
			else if((in[i]=='C' || in[i]=='G' || in[i]=='J' || in[i]=='K' || in[i]=='Q' || in[i]=='S' || in[i]=='S' || in[i]=='X' || in[i]=='Z') && flag2==false)
			{
				flag1=false;
				flag2=true;
				flag3=false;
				flag4=false;
				flag5=false;
				flag6=false;
				printf("2");
			}
			else if((in[i]=='D' || in[i]=='T') && flag3==false)
			{
				flag1=false;
				flag2=false;
				flag3=true;
				flag4=false;
				flag5=false;
				flag6=false;
				printf("3");
			}
			else if((in[i]=='L') && flag4==false)
			{
				flag1=false;
				flag2=false;
				flag3=false;
				flag4=true;
				flag5=false;
				flag6=false;
				printf("4");
			}
			else if((in[i]=='M' || in[i]=='N') && flag5==false)
			{
				flag1=false;
				flag2=false;
				flag3=false;
				flag4=false;
				flag5=true;
				flag6=false;
				printf("5");
			}
			else if((in[i]=='R') && flag6==false)
			{
				flag1=false;
				flag2=false;
				flag3=false;
				flag4=false;
				flag5=false;
				flag6=true;
				printf("6");
			}
			else if(in[i]=='A' || in[i]=='E' || in[i]=='I' || in[i]=='O' || in[i]=='U' || in[i]=='H' || in[i]=='W' || in[i]=='Y')
			{
				flag1=false;
				flag2=false;
				flag3=false;
				flag4=false;
				flag5=false;
				flag6=false;
			}
		}
		printf("\n");
	}

	return 0;
}