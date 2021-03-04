#include <stdio.h>
#include <string.h>
int main()
{
    char sc[100];
    int i,j,n,x[4],tmp,tpm;
    scanf("%d",&n);
    x[0] = 1;
    for(i=0;i<n;i++)
    {
        x[0] = 1;

        scanf("%s",sc);
        for(j=0;j<strlen(sc);j++)
        {
            if(sc[j]=='A')
            {
                tmp = x[1];
                x[1] = x[2];
                x[2] = tmp;
            }
            else if(sc[j]=='B')
            {
                tmp = x[0];
                x[0] = x[3];
                x[3] = tmp;
            }
            else if(sc[j]=='C')
            {
                tmp = x[0];
                x[0] = x[2];
                x[2] = tmp;
                tpm = x[1];
                x[1] = x[3];
                x[3] = tpm;
            }
            else if(sc[j]=='D')
            {
                tmp = x[0];
                x[0] = x[1];
                x[1] = tmp;
                tpm = x[2];
                x[2] = x[3];
                x[3] = tpm;
            }
            else if(sc[j]=='E')
            {
                tmp = x[0];
                x[0] = x[3];
                x[3] = tmp;
                tpm = x[2];
                x[2] = x[1];
                x[1] = tpm;
            }
        }

        for(j=0;j<4;j++)
        {
            if(x[j]==1)
            {
                printf("%d\n",j+1);
            }
            x[j] = 0;
        }

    }
    return 0;
}
