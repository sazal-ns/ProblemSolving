#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,tes,a,b,c;

    scanf("%d",&tes);
    for(i=1; i<=tes; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a+b>c && a+c>b && b+c>a)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }

    return 0;
}
