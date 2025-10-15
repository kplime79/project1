#include <stdio.h>

int main() {
    int a[10];
    int sum = 0; // 합계 저장 변수 (이전의 b)
    
    // 1. 입력 루프
    for (int i = 0; i < 10; i++)
    {
        scanf(" %d", &a[i]);
    }
    
    // 2. 합산 및 출력 루프
    for (int i = 0; i < 10; i++)
    {
        if (a[i] >= 250)
        {
            // ⚠️ 0으로 나누기 방지 및 출력
            // a[0]에서 250 이상이 발견되면 i는 0. 이 경우 합계는 0, 평균도 0.0
            if (i == 0) {
                 // 합계 (0) 와 평균 (0.0) 출력. 소수점은 %.1f로 출력
                 printf("%d %.1f", 0, 0.0);
            } else {
                // 합계 (sum) 와 평균 (sum / i) 출력
                printf("%d %.1f", sum, (double)sum / i);
            }
            break; // 조건을 만족했으므로 루프 종료
        }
        
        // 250 미만인 경우에만 합산
        sum += a[i];
    }
    
    return 0;
}