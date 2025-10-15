#include <stdio.h>

int main() {
    int a = 0;
    int b=0;
    for (int i =0;i<10;i++ )
    {
        scanf("%d",&a);
        b += a;
    }
    printf("%d",b);
    return 0;
}