#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int area = N*N;
    printf("%d",area);
    if (area<5)
    {
        printf("tiny");
    }
    return 0;
}