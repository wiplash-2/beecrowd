#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
        int count = 1;
    for(int i=1; i<=y; i++){
        printf("%d", i);
        if(count==x){
            printf("\n");
            count = 1;
        }else{
            if (i != y){
                printf(" ");
            }
        count++;
        }
    }
    return 0;
}
