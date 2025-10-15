#include <stdio.h>

int main() {
    int a[10];
    int b=0;
    for (int i=0;i<10;i++)
    {
        scanf(" %d",&a[i]);
    }
    for (int i=0;i<10;i++)
    {   
        
        if (a[0]==0){
        printf("%d %d",0,0);
        break;
        }

        if (a[i]>=250)
        {
            printf("%d %.1f",b,(double)b/i);
            break;
        }
        b+=a[i];
    }
    return 0;
}