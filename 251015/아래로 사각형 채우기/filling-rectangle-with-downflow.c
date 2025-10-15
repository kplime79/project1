#include <stdio.h>

int main() {
    int a[100][100];
    int n,m=0;
    scanf("%d",&n);
    for (int i=1;i<n+1;i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ",i+m);
            m += n;
        }
        printf("\n");
        m = 0;
    }
    return 0;
}