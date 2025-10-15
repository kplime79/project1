#include <stdio.h>

int main() {
    int a[10];
    int min_val; // 최소값을 저장할 변수
    int count = 0; // 최소값의 등장 횟수

    // 1. 첫 번째 값을 읽고 min_val과 count를 초기화합니다.
    scanf("%d", &a[0]);
    min_val = a[0]; // min_val을 첫 번째 값으로 초기화 (가장 안전한 방법)
    count = 1;      // 첫 번째 값은 무조건 최소값의 첫 번째 등장입니다.

    // 2. 나머지 9개의 값을 읽고 비교합니다.
    for (int i = 1; i < 10; i++) 
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
        // a[i]가 min_val보다 크면 아무것도 하지 않습니다.
    }

    printf("%d %d\n", min_val, count);
    return 0;
}