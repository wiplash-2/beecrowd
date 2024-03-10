#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for (int i=0; i<n; i++){
        if (ara[i] == 0){
            printf("NULL\n");
        }else if(ara[i]<0){
            if ((ara[i]*-1) % 2 == 0){
                printf("EVEN NEGATIVE\n"); 
            }else{
                printf("ODD NEGATIVE\n");
            }
        }else{
            if (ara[i] % 2 == 0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("ODD POSITIVE\n");
            }
        }
    }
    return 0;
}
