#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

bool isprime(int x)
{
    if(x==1)
        return true;
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    char in[9999];
    int i,j,k;
    while(gets(in)!=NULL)
    {
        n=0;
        for(i=0; in[i]!=NULL; i++)
        {
            if(islower(in[i]))
                n+=in[i]-'a'+1;
            else
                n+=in[i]-'A'+27;
        }
        if(isprime(n)==true)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }

    return 0;
}
