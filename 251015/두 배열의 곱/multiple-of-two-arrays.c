#include <stdio.h>

int main() {
    int a1[3][3];
    int a2[3][3];
    int a3[3][3];

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            a3[i][j] = (a1[i][j]*a2[i][j]);
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }

    return 0;
}