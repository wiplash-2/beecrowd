
#include <stdio.h>

int main()
{
    while(1){
        int times, dad, son, s_count=0, d_count=0;
        scanf("%d", &times);
        if (times == 0){
            break;
        }
        for (int i=0; i<times; i++){
            scanf("%d %d", &dad, &son);
            if (dad>son){
                d_count++;
            }else if(son>dad){
                s_count++;
            }
        }
        printf("%d %d\n", d_count, s_count);
    }

    return 0;
}
