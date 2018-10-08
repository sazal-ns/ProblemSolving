#include<stdio.h>
int main()
{
	int i,a[13],b[13];
	int c,d,e,f;
	f=1;
	while(scanf("%d",&c)==1 && c>=0)
	{
	for (i = 1; i <=12; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 1; i <=12; i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Case %d:\n",f);
	for (i = 1; i <=12; i++)
	{
		if(c>=b[i])
		{
			printf("No problem! :D\n");
			c=c-b[i];
		}
		else
		{
			printf("No problem. :(\n");
		}
		c=c+a[i];
	}
	f++;
	}
	return 0;
}
