#include <stdio.h>

int main() {
    double a[2][4];
    double sum1 = 0;
    double sum2[4];
    double sum3 = 0;

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf("%lf",&a[i][j]);
            sum1 += a[i][j];
            sum2[j] += a[i][j];
            sum3 += a[i][j];
        }
        printf("%.1lf ", (double)sum1/4);
        sum1 = 0;
    }
    printf("\n");
    for (int i=0;i<4;i++)
    printf("%.1lf ", sum2[i]/2);
    printf("\n%.1lf ",sum3/8);
    return 0;
}