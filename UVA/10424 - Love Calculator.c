#include <stdio.h>
#include <string.h>

int main()
{
    char name1[30],name2[30];
    int sum1,sum2,i,sav;
    double love;
    while(gets(name1)!=NULL)
    {
        sum1=sum2=0;
        gets(name2);
        for(i=0; i<strlen(name1); i++)
        {
            if(name1[i]>='A' && name1[i]<='Z')
            {
                sum1+=1+name1[i]-'A';
            }
            else if(name1[i]>='a' && name1[i]<='z')
            {
                sum1+=1+name1[i]-'a';
            }
        }
        for(i=0; i<strlen(name2); i++)
        {
            if(name2[i]>='A' && name2[i]<='Z')
            {
                sum2+=1+name2[i]-'A';
            }
            else if(name2[i]>='a' && name2[i]<='z')
            {
                sum2+=1+name2[i]-'a';
            }
        }
        while(sum1>9)
        {
            sav=sum1;
            sum1=0;
            while(sav!=0)
            {
                sum1+=sav%10;
                sav/=10;
            }

        }
        while(sum2>9)
        {
            sav=sum2;
            sum2=0;
            while(sav!=0)
            {
                sum2+=sav%10;
                sav/=10;
            }
        }
        if(sum1<sum2)
        {
            love=(sum1*1.0/sum2)*100.00;
        }
        else
        {
            love= (sum2*1.0/sum1)*100;
        }
        printf("%.2lf %%\n",love);


    }

    return 0;
}
