#include <stdio.h>
#include <string.h>

int main()
{
    int i=1;
    char ch[100];

    while(scanf("%s",ch)==1)
    {
        if(ch[0]=='#')
            return 0;

        if(strlen(ch)==5 && ch[1]=='E')
            printf("Case %d: ENGLISH\n",i++);
        else if(strlen(ch)==4 && ch[1]=='O')
            printf("Case %d: SPANISH\n",i++);
        else if(strlen(ch)==5 && ch[1]=='A')
            printf("Case %d: GERMAN\n",i++);
        else if(strlen(ch)==7)
            printf("Case %d: FRENCH\n",i++);
        else if(strlen(ch)==4 && ch[0]=='C')
            printf("Case %d: ITALIAN\n",i++);
        else if(strlen(ch)==12)
            printf("Case %d: RUSSIAN\n",i++);
        else
            printf("Case %d: UNKNOWN\n",i++);
    }

    return 0;
}
