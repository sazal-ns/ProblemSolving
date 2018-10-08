#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int prime[1000001],lp=0;
int cutp[1000001];

void isprime(int x)
{
    cutp[0]=cutp[1]=1;
    prime[lp++]=2;
    for(int i=3; i<=sqrt(x); i+=2)
    {
        if(cutp[i]==0)
        {
            for(int j=i*i; j<=x; j+=2*i)
            {
                cutp[j]=1;
            }
        }
    }
    for(int j=3; j<=x; j+=2)
    {
        if(cutp[j]==0)
        prime[lp++]=j;
    }

}

int main()
{
    int tes,a,b,c;
    int i,j,k=859963392;

    isprime(999999);
    for(i=0; i<=21; i++)
        printf("%d-",prime[i]);

    return 0;
}
