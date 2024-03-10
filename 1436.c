#include <stdio.h>
int main(){
    int n, m;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &m);
        int ara[m];
        for (int j=0; j<m; j++){
            scanf("%d", &ara[j]);
        }
        for (int i=0; i<m; i++){
            for (int j=0; j<m-i-1; j++){
                if (ara[j] > ara[j+1]){
                    int temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                }
            }
        }int mid = (int) m/2;
        printf("Case %d: %d\n", i+1, ara[mid]);
    }return 0;
}
