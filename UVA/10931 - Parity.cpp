#include <cstdio>


using namespace std;

int c;

void bi(int n)
{
	int d,i=0;
	if(n!=0)
	{
		d=n%2;
		bi(n/2);
		printf("%d",n%2);
		if(d==1)
			c++;
	}
		

}


int main()
{
	int a,b;
	
	while (scanf("%d",&a)==1 && a!=0)
	{
		c=0;
		printf("The parity of ");
		bi(a);
		printf(" is %d (mod 2).\n",c);
	}
	

	return 0;
}