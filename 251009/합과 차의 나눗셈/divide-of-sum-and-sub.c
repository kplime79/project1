#include <stdio.h>

int main() {
    int a, b;
    
    // a와 b 입력
    if (scanf("%d %d", &a, &b) != 2) {
        return 1; // 입력 오류 처리
    }
    
    // 실수 나누기를 위해 피연산자 중 하나를 double(또는 float)로 형 변환
    // double 사용을 권장합니다. (더 높은 정밀도)
    double result = (double)(a + b) / (a - b);
    
    // %.2f 형식 지정자를 사용하면 자동으로 셋째 자리에서 반올림되어 
    // 소수점 둘째 자리까지 출력됩니다.
    printf("%.2f\n", result);
    
    return 0;
}