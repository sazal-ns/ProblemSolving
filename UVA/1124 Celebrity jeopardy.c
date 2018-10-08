#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[1000];

    while(gets(ch)!=NULL)
    {
        puts(ch);
    }
    return 0;
}
