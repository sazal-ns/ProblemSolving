#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tes,e,f,c,kha;

    scanf("%d",&tes);
    while(tes--)
    {
        scanf("%d%d%d",&e,&f,&c);
         f+=e;
         kha=0;
         while(f>=c)
         {
             e=f;
             f/=c;
             kha+=f;
             f+=e%c;



         }
         printf("%d\n",kha);
    }

    return 0;
}
