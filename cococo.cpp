#include <stdio.h>
#include <string.h>

int main ()
{
    char str[1000];
    int length, i, j, a[1000],count;
    while(gets(str))
    {
        length = strlen (str);
        j=0;
        count = 0;
        for (i=0; i<length; i++)
        {
            if ( str [i] == ' ')
            {
                a[j]=i;
                j++;
            }
        }
        if((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z'))
        {
            count=1;
        }
        for (i=0; i<j; i++)
        {
            if ((str[a[i]+1]>='a' && str[a[i]+1]<='z')  || (str[a[i]+1]>='A' && str[a[i]+1]<='Z'))
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
