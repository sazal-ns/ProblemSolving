#include<stdio.h>
int main()
{
    int a,b,c,d;
    int i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        d=0;
        c=0;

        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {

            scanf("%d",&c);
            if(c<0)
            {
                c=0;
            }
            d=c+d;
        }
		printf("Case %d: %d\n",i,d);
    }
	return 0;
}
