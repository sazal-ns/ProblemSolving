#include <stdio.h>

int main()
{
	int i,j,a,b,c;

	scanf("%d",&a);

	for(i=1; i<=a; i++)
	{
	    int d=0,u=0,l=0;

	    scanf("%d",&b);

	    for(j=1; j<=b; j++);
	    {
	        scanf("%d",&c);
	        if(d!=0)
	        {
	            if(d>c)
	            {
	                l++;
	            }
	            else if(d<c)
	            {
	                u++;
	            }
	        }
			d=c;
	    }
	    printf("Case %d: %d %d\n",i,u,l);

	}


	return 0;
}
