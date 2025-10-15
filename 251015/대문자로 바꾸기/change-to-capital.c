#include <stdio.h>
#include <ctype.h>

int main() {
    char a[5][3];
    for (int i=0;i<5;i++)
    {
        for (int j=0; j<3;j++)
        {
            scanf(" %c",&a[i][j]);
            printf("%c ",toupper(a[i][j]));
        }
        printf("\n");
    }
    return 0;
}