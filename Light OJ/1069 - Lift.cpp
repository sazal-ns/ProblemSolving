#include <cstdio>

using namespace std;

int main()
{
	int kes,m,d,res,tem;
	int i,j,k;
	
	scanf("%d",&kes);
	for(i=1; i<=kes; i++)
	{
		res=0;
		scanf("%d%d",&m,&d);
	
		if(d<m){
			d=m+(m-d);
		}
		res=(4*d)+9+10;
		if(m==0)
			res=0;	

		printf("Case %d: %d\n",i,res);
	}

	return 0;
}