#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&b,&a);
    for (b; b>=a; b--){
    if (b%2 != 0)
    printf("%d ",b);
    }
    return 0;
}