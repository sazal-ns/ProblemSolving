#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
	long long test,n,cn,val,presqr,cursqr,cou,arr[100000];
	long long i,j,k;
	bool happy,big;

	sf("%lld",&test);
	for(i=1; i<=test; i++)
	{
		happy=true;
		big=false;
		cou=0;
		sf("%lld",&n);
		cursqr=arr[cou++]=n;
		while(1)
		{
			//cou++;
			if(cursqr<10){
				presqr=cursqr;
				cursqr*=cursqr;
				arr[cou++]=cursqr;
			}
			else
			{
				cn=0;
				while (cursqr!=0)
				{
					val=cursqr%10;
					cursqr/=10;
					cn+=val*val;
				}
				cursqr=cn;
				arr[cou++]=cn;

			}
			//if(presqr>=cursqr && big==false && cou>1)
				//big=true;
			for(j=0; j<cou-2; j++)
			{
				if(arr[j]==cursqr)
				{
					happy=false;
					big=true;
					break;
				}
				
			}
			if(big==true || cursqr==1)
				break;
			presqr=cursqr;
		}

		if(happy==true)
			pf("Case #%lld: %lld is a Happy number.\n",i,n);
		else
		{
			pf("Case #%lld: %lld is an Unhappy number.\n",i,n);
		}
	}

	return 0;
}