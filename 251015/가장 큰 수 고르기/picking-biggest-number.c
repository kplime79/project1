#include <stdio.h>

int main() {
    int a[10];
    int max_val = 0;
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if (max_val <= a[i])
        {
            max_val = a[i];
        }
    }
    printf("%d",max_val);
    return 0;
}