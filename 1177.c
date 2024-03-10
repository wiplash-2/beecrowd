#include <stdio.h>

int main()
{
    int t, ara[10];
    scanf("%d", &t);
    int count = 0;
    for (int i=0; i<1000; i++){
        while(1){
            ara[i] = count;
            count++;
            break;
        }if (count == t){
            count = 0;
        }
    }
    for (int k=0; k<1000; k++){
        printf("N[%d] = %d\n", k, ara[k]);
    }

    return 0;
}
