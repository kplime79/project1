#include <stdio.h>

int main() {
    int N;
    int limit = 10; // 10번째 배수까지 출력하도록 설정

    printf("정수 N을 입력하세요: ");
    scanf("%d", &N);

    printf("%d의 배수 %d개:\n", N, limit);
    
    // i는 1부터 limit까지 1씩 증가합니다.
    for (int i = 1; i <= limit; i++) {
        // N * i는 N의 i번째 배수입니다.
        printf("%d번째 배수: %d\n", i, N * i);
    }
    
    return 0;
}