#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int num[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(int i=0; i<m+n-1; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<=i; j++)
            {
                if((i-j>=0)&&(j>=0)&&(i-j<m)&&(j<n))
                    printf("%d ",num[i-j][j]);
            }
        }
        else
        {
            for(int j=0; j<=i; j++)
            {
                if((i-j>=0)&&(j>=0)&&(j<m)&&(i-j<n))
                    printf("%d ",num[j][i-j]);
            }
        }
    }
}
