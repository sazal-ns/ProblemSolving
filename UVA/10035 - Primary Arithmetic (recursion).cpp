#include <cstdio>


using namespace std;

int c;

void add(int a, int b, int d)
{
	int x,y,z;
	if(a+b+d!=0)
	{
		x=a%10;
		y=b%10;
		z=x+y+d;
		
		add(a/10,b/10,z/10);
		if(d==1)
			c++;
	}
		
}


int main()
{
	int a,b;

	while(scanf("%d%d",&a,&b)==2 && a!=0 || b!=0)
	{
		c=0;
		add(a,b,c);
		if(c==0)
			printf("No carry operation.\n");
		else if(c==1)
		{
			printf("%d carry operation.\n",c);
		}
		else
		{
			printf("%d carry operations.\n",c);
		}
	}

	return 0;
}