#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,test,a,b,save;

        scanf("%d",&test);
        for(i=1; i<=test; i++)
        {
            save=0;
          scanf("%d%d",&a,&b);
          for(j=a; j<=b; j++)
          {
              if(j%2!=0)
                save+=j;
          }
          printf("Case %d: %d\n",i,save);

        }


    return 0;
}
