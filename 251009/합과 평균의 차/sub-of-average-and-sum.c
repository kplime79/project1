#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d = (a+b+c)/3;
    printf("%d\n%d\n%d",a+b+c, d,a+b+c-d);
    return 0;
}