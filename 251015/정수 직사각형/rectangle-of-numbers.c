#include <stdio.h>

int main() {
    int a[4][3];
    int n,m,k =0;
    scanf("%d %d",&n,&m);

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            k += 1;
            a[i][j] = k;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}