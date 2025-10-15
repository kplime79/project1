#include <stdio.h>

int main() {
    int max_val, min_val;
    int a[5];
    
    // 입력은 그대로 5개를 받습니다.
    for (int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    max_val = a[0];
    min_val = a[0];

    for (int j=1; j<5; j++)
    {
        // **수정된 로직:** 종료 조건을 가장 먼저 검사합니다.
        if (a[j] == 999 || a[j] == -999) {
            break; 
        }

        // 종료 조건이 아니면 최대/최소값을 갱신합니다.
        if (max_val < a[j]) // 더 클 때만 갱신 (효율 개선)
        {
            max_val = a[j];
        }
        if (min_val > a[j]) // 더 작을 때만 갱신 (효율 개선)
        {
            min_val = a[j];
        }
    }
    
    // 출력 형식에 맞춰 개행 문자 제거
    printf("%d %d", max_val, min_val);
    return 0;
}