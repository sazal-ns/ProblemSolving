#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <algorithm>

#define min(a, b) (a < b) ? a : b
#define max(a, b) (a > b) ? a : b

using namespace std;


int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int tes,tgcd,a,flag;
    int i,j,k,l;
    int num[111];
    char in[1000001];

    scanf("%d%*c",&tes);
    for(i=1; i<=tes; i++)
    {
        j=k=a=l=flag=0;
        gets(in);
        while(in[j]!=NULL)
        {
            if(isdigit(in[j]))
            {
                flag=1;
                    a=a*10+(in[j]-'0');
            }
            else if(flag==1)
            {
                flag=0;
                num[l++]=a;
                a=0;
            }
            if(in[j+1]==NULL && flag==1)
            {
                flag=0;
                num[l++]=a;
                a=0;
            }
            j++;
        }
        int n,m,p;
        m=1;
        for(j=0; j<l; j++)
        {
            for(p=j+1; p<l; p++)
            {
                m=max(m,gcd(num[j],num[p]));
            }
        }
        printf("%d\n",m);
    }

    return 0;
}
