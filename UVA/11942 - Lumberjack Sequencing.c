#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[11],i,j,tes,flag;;

    printf("Lumberjacks:\n");
    scanf("%d",&tes);
    while(tes--)
    {
        flag=0;
        for(i=0; i<10; i++)
        {
            scanf("%d",&a[i]);

            if(i>0 && a[i]>a[i-1] && (flag==0 || flag==1))
            {
                    flag=1;
            }
            else if(i>0 && a[i]<a[i-1] && (flag==0 || flag==2))
            {
                    flag=2;
            }
            else if(i>0)
            {
                flag=3;

            }
        }
        if(flag==1 || flag==2)
            printf("Ordered\n");
        else if(flag==3)
            printf("Unordered\n");
    }

    return 0;
}
