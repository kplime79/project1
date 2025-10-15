#include <stdio.h>

int main() {
    // 1. 배열을 0으로 초기화하여 잠재적 오류 방지
    int a[10] = {0}; 
    
    // 2. 입력 범위 밖의 값(100보다 큰 값)으로 min_val을 초기화합니다.
    // (문제에서 입력이 100 이하의 양의 정수라고 가정합니다. 만약 음수가 있다면 더 큰 수를 사용해야 합니다.)
    int min_val = 101; 
    int count = 0; 

    // 모든 입력 처리를 하나의 루프에서 수행
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);

        if (a[i] < min_val) 
        {
            // 새로운 최소값을 발견한 경우
            min_val = a[i]; // 최소값 업데이트
            count = 1;      // 횟수를 1로 리셋
        }
        else if (a[i] == min_val) 
        {
            // 현재 최소값과 같은 값을 다시 발견한 경우
            count++;        // 횟수만 증가
        }
    }

    // 채점 시스템 요구사항에 따라 개행 문자(\n) 없이 출력할 수도 있습니다.
    printf("%d %d\n", min_val, count); 
    return 0;
}