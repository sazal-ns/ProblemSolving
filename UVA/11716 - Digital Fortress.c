#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int tes,i,j,k,root,ro,d;

    scanf("%d%*c",&tes);

    for(i=1; i<=tes; i++)
    {
        char in[11111]={0};
        gets(in);
        char de[11111]={0};

        root=sqrt(strlen(in));

        if(root*root == strlen(in))
        {
            ro=root;
            d=0;
            for(j=0; j<strlen(in); j++)
            {
                for(k=j; k<strlen(in); k+=ro)
                {
                    de[d++]=in[k];
                }
                if(strlen(in)== strlen(de))
                    break;
            }

            puts(de);
        }
        else
            printf("INVALID\n");

    }

    return 0;
}
