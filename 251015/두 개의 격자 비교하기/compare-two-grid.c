#include <stdio.h>
// 표준 출력 버퍼를 제어하기 위해 필요할 수 있습니다.
#include <stdlib.h> 

int main() {
    // 1. 배열 선언 (최대 크기 100x100)
    int a1[100][100];
    int a2[100][100];
    int a3[100][100];
    int n,m; // n과 m을 초기화하지 않아도 괜찮습니다.

    // 💡 수정 1: scanf 형식 지정자를 두 개 사용하여 n과 m을 모두 정확하게 읽습니다.
    if (scanf("%d %d",&n,&m) != 2) {
        fprintf(stderr, "입력 오류: 행과 열의 크기를 두 개 입력해야 합니다.\n");
        return 1; // 오류 종료
    }
    
    // 💡 안전성 추가: 배열의 선언된 크기(100)를 초과하는지 검사
    if (n <= 0 || n > 100 || m <= 0 || m > 100) {
        fprintf(stderr, "입력 오류: 행렬 크기(N, M)는 1에서 100 사이여야 합니다.\n");
        return 1; // 오류 종료
    }
    
    // 2. a1 행렬 입력
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (scanf("%d",&a1[i][j]) != 1) {
                fprintf(stderr, "입력 오류: a1 행렬의 원소 입력에 실패했습니다.\n");
                return 1;
            }
        }
    }

    // 3. a2 행렬 입력
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (scanf("%d",&a2[i][j]) != 1) {
                fprintf(stderr, "입력 오류: a2 행렬의 원소 입력에 실패했습니다.\n");
                return 1;
            }
        }
    }

    // 4. 비교 및 출력

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (a1[i][j] == a2[i][j])
            a3[i][j] = 0;
            else
            a3[i][j] = 1;
            
            printf("%d ",a3[i][j]);
        }
    printf("\n");
    
    // 💡 수정 2: 출력 버퍼링을 방지하여 결과를 즉시 출력합니다.
    fflush(stdout); 
    }
    
    return 0;
}