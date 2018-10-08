#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,tes,fal,sum,val[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char s[111];
    scanf("%d%*c",&tes);
    for(i=1; i<=tes; i++)
    {
        sum=0;
        gets(s);
        for(j=0; s[j]!=NULL; j++)
        {
            if(s[j]==' ')
                sum++;
            else
            {
                fal=s[j]-'a';
            sum+=val[fal];

            }
        }
        printf("Case #%d: %d\n",i,sum);
    }

    return 0;
}
