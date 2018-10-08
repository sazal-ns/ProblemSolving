#include <cstdio>

int main()
{
    int n,tes;
    int i;
    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        printf("%d %d\n",n/2,n/2);
        else
            printf("%d %d\n",n/2,n/2+1);
    }
}
