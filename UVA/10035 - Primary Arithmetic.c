#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[11]={0},b[11]={0},c[11]={0};
    int i,j,k,la,lb,d[22]={0};

    while(scanf("%s%s",&a,&b)==2 && a[0]!='0' || b[0]!='0' )
    {
        k=0;
        j=0;
        la=strlen(a);
        la--;
        lb=strlen(b);
        lb--;
        for(i=0; a[i]!='\0'; i++)
        {
            c[i]=a[la--];
        }
        c[i]='\0';
        for(i=0; b[i]!='\0'; i++)
        {
            a[i]=b[lb--];
        }
        a[i]='\0';
        if(strlen(a)==strlen(c))
        {
            for(i=0; a[i]!='\0'; i++)
            {
                d[i]=(a[i]-'0'+c[i]-'0')+k;
                if(d[i]>9)
                {
                while(d[i]!=0)
                {
                    k=d[i]%10;
                    d[i]/=10;
                }
                if(k!=0)
                    j++;
                }
                else
                    k=0;
            }
        }
        else if(strlen(a)>strlen(c))
        {
           for(i=0; c[i]!='\0'; i++)
            {
                d[i]=(a[i]-'0'+c[i]-'0')+k;
                if(d[i]>9)
                {
                while(d[i]!=0)
                {
                    k=d[i]%10;
                    d[i]/=10;
                }
                if(k!=0)
                    j++;
                }
                else
                    k=0;
            }
            if(k!=0){
                for( ; a[i]!='\0'; i++)
            {
                d[i]=a[i]-'0'+k;
                if(d[i]>9)
                {
                while(d[i]!=0)
                {
                    k=d[i]%10;
                    d[i]/=10;
                }
                if(k!=0)
                    j++;
                }
                else
                    k=0;
            }
            }



        }
        else{
                for(i=0; a[i]!='\0'; i++)
            {
                d[i]=(c[i]-'0'+a[i]-'0')+k;
                if(d[i]>9)
                {
                while(d[i]!=0)
                {
                    k=d[i]%10;
                    d[i]/=10;
                }
                if(k!=0)
                    j++;
                }
                else
                    k=0;
            }
            if(k!=0){
                for( ; c[i]!='\0'; i++)
            {
                d[i]=c[i]-'0'+k;
                if(d[i]>9)
                {
                while(d[i]!=0)
                {
                    k=d[i]%10;
                    d[i]/=10;
                }
                if(k!=0)
                    j++;
                }
                else
                    k=0;
            }
            }

        }
        if(j==0)
            printf("No carry operation.\n");
        else if(j==1)
            printf("%d carry operation.\n",j);
        else
            printf("%d carry operations.\n",j);
    }

    return 0;
}
