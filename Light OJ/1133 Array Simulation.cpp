#include <stdio.h>
#include <string.h>


int main()
{
	int tes,n,m,arr[111],x,y,re[111];
	int i,j,k,t,sav;
	char ch;

	scanf("%d",&tes);
	for(i=1; i<=tes; i++)
	{
		scanf("%d%d",&n,&m);
		for(j=0; j<n; j++)
		{
			scanf("%d",&arr[j]);
		}
		
		for(k=1; k<=m; k++)
		{
			scanf("%*c%c",&ch);
			if(ch=='S')
			{
				scanf("%d",&x);
				for(t=0; t<n; t++)
					arr[t]=arr[t]+x;
			}
			else if(ch=='M')
			{
				scanf("%d",&x);
				for(t=0; t<n; t++)
					arr[t]*=x;
			}
			else if(ch=='D')
			{
				scanf("%d",&x);
				for(t=0; t<n; t++)
					arr[t]/=x;
			}
			else if(ch=='R')
			{
				x=0;
				for(t=0; t<n; t++)
					re[t]=arr[t];
				t-=1;
				for( ;t>=0; t--)
					arr[x++]=re[t];

			}
			else if(ch=='P')
			{
				scanf("%d%d",&x,&y);
				sav=arr[x];
				arr[x]=arr[y];
				arr[y]=sav;
			}
		}
		printf("Case %d:\n",i);
		for(t=0; t<n; t++){
			printf("%d",arr[t]);
			if(t!=n-1)
				printf(" ");
			else
			{
				printf("\n");
			}
		}
	}


	return 0;
}