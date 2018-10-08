#include<stdio.h>
int main()
{
   int a,b,c,d,e;
   int x,y,xx,yy,q,w;
   int i,j,k=0,l=0;
   int p[9999];
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
k=0;
       scanf("%d%d%d%d",&x,&y,&xx,&yy);
       scanf("%d",&b);
       for(j=1;j<=b;j++)
       {
           scanf("%d%d",&q,&w);

           if(q>x && q<xx && w>y && w<yy  )
           {

               p[k]=1;
               k++;
           }

           else
           {

               p[k]=0;
               k++;
           }
       }
       printf("Case %d:\n",i);
       for(l=0;l<k;l++)
       {
           if(p[l]==0)
           {
              printf("No\n");
           }
           else
           {
               printf("Yes\n");
           }
       }
   }
return 0;
}
