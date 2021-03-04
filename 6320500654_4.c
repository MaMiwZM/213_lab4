#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1000] , t[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    char *p;
    int i=0,j,k=0;
    scanf("%[^\n]s",s);
    p=strtok(s," ");
    while(p!=NULL)
    {
        for(j=0;j<11;j++)
            if(strcmp(p,t[j]))
                k++;
        if(k==11||i==0)
            printf("%c",toupper(p[0]));
            p=strtok(NULL," ");
            i++;
             k=0;
    }
    return 0;
}
