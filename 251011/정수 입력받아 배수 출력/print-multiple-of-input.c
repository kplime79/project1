#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // 1배수부터 5배수까지 반복
    for (int i = 1; i <= 5; i++) {
        // N * i (N의 i번째 배수)를 출력하고 공백으로 구분
        printf("%d ", N * i); 
    }
    
    // 출력이 끝난 후 다음 줄로 넘어가도록 줄바꿈
    printf("\n"); 
    
    return 0;
}