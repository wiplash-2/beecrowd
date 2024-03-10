#include <stdio.h>
int main()
{
    int N, Q, ara[30000], ara2[30000];
    while (scanf("%d %d", &N, &Q) != EOF){
        for (int i=0; i<N; i++){
            scanf("%d", &ara[i]);
        }
        for (int j=0; j<Q; j++){
            scanf("%d", &ara2[j]);
        }
        //now I will sort....
        for (int i=0; i<N; i++){
            for (int j=0; j<N-i-1; j++){
                if (ara[j]<ara[j+1]){
                    int temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                }
            }
        }
        for (int m=0; m<Q; m++){
            printf("%d\n", ara[ara2[m]-1]);
            //printf("%d ", ara[m]);
        }

    }return 0;
}
