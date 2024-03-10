#include <stdio.h>
int main(){
    int n;
    while(1){
        scanf("%d", &n);
        if (n==0){
            break;
        }
        int ara[n], ara2[n];
        for (int i=0; i<n; i++){
            scanf("%d", &ara[i]);
            ara2[i] = ara[i];
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<n-i-1; j++){
                if (ara[j] > ara[j+1]){
                    int temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                }
            }
        }for (int i=0; i<n; i++){
            if (ara[n-2] == ara2[i]){
                printf("%d", i+1);
            }
        }
    }return 0;
}
