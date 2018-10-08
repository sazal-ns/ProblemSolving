#include <stdio.h>
#include <string.h>

int main()
{
    char a[25],b[25],g[1];
    int tes,i,j,k,ch;

    scanf("%d",&tes);
    getchar();
    for(i=1; i<=tes; i++)
    {
        ch=0;
        scanf("%s",a);
        scanf("%s",b);

        if(strlen(a)==strlen(b))
        {
            for(j=0; j<=strlen(a); j++)
            {
                    if(a[j]==b[j])
                        ch=1;
                    else if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
                        if( b[j]=='a' || b[j]=='e' || b[j]=='i' || b[j]=='o' || b[j]=='u')
                         ch=1;
                         else
                            {
                            ch=0;
                            break;

                            }
                    else
                        {
                            ch=0;
                            break;
                        }
            }
            if(ch==1)
                printf("Yes\n");
            else
                printf("No\n");

        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}