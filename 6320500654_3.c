#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[200];
    scanf("%s",c);
    for(i=0;i<strlen(c)-1;i++)
    {
        if(c[i]!=c[i+1])
        {
            printf("%c",c[i]);
        }
    }
    printf("%c",c[strlen(c)-1);
    return 0;
}
