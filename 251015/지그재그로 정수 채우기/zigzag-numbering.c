#include <stdio.h>

int main() {
    int b=0,n=0,m=0,c=0;
    int a[100][100];
    scanf("%d %d",&n,&m);
    c = (n*m-1);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (j%2!=0)
            {
                a[i][j] = c--;
            }
            else
            {
                a[i][j] = b++;
            }
        }
    }



    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}