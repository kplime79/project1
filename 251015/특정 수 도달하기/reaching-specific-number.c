#include <stdio.h>

int main() {
    int a[10];
    int sum = 0; 
    
    for (int i = 0; i < 10; i++)
    {
        scanf(" %d", &a[i]);
    }
    
    // 이 변수는 250 이상인 값을 발견했는지 여부를 기록합니다.
    int found_250 = 0; 
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i] >= 250)
        {
            found_250 = 1; // 발견했음
            
            // 0으로 나누기 방지 및 출력 (합과 평균)
            if (i == 0) {
                 // a[0]이 250 이상일 경우: 합 0, 평균 0.0
                 printf("%d %.1f", 0, 0.0);
            } else {
                // 정상적인 합과 평균 출력
                printf("%d %.1f", sum, (double)sum / i);
            }
            break; 
        }
        
        sum += a[i];
    }
    
    // 2. 루프가 끝까지 실행되었을 때 (250 이상인 값이 없었을 때)
    if (found_250 == 0) {
        // 배열의 모든 요소(10개)의 합과 평균을 출력합니다.
        printf("%d %.1f", sum, (double)sum / 10);
    }
    
    return 0;
}