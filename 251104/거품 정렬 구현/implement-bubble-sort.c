#include <stdio.h>

int main() {
    int n, i, j, tem;
    int arr[100]; 

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 바깥 루프 (패스 횟수): n-1번까지 반복
    for (i = 0; i < n - 1; i++) {
        // 안쪽 루프 (비교/교환): 이미 정렬된 뒷부분은 제외
        for (j = 0; j < n - 1 - i; j++) {
            // 인접한 두 요소를 비교하여 교환
            if (arr[j] > arr[j + 1]) {
                tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
    
    // 결과 출력
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}