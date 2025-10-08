#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int area = N*N;
    printf("%d\n",area);
    if (N<5)
    {
        printf("tiny");
    }
    return 0;
}