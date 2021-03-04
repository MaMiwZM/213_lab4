#include<stdio.h>
int main()
{
    int n,i,j,k,best,worst,max=0,min=0;
    scanf("%d",&n);
    int a[n][3],gold[n],silver[n],bronze[n],result[n],medal[n];
    if(n>=3)
    {
        for(i=0; i<n; i++)
        {
            gold[i]=0;
            silver[i]=0;
            bronze[i]=0;
            for(j=0; j<3; j++)
            {
                a[i][j]=0;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<3; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<3; j++)
            {
                if(j==0)
                {
                    gold[i]+=a[i][j];
                    gold[i]*=4;
                }
                if(j==1)
                {
                    silver[i]+=a[i][j];
                    silver[i]*=2;
                }
                if(j==2)
                {
                    bronze[i]+=a[i][j];
                    bronze[i]*=1;
                    result[i]=gold[i]+silver[i]+bronze[i];
                }
            }
        }
        for(i=0; i<n-2; i++)
        {
            medal[i]=result[i]+result[i+1]+result[i+2];
        }
        for(i=0; i<n-2; i++)
        {
            printf(" Medal %d %d\n",i,medal[i]);
        }
        best=medal[0];
        worst=medal[0];
        for(i=0; i<n-2; i++)
        {
            if(best<medal[i])
            {
                best=medal[i];
                max=i;
            }
            if(worst>medal[i])
            {
                worst=medal[i];
                min=i;
            }
        }
        printf("%d %d",max+1,min+1);
    }
    return 0;
}
