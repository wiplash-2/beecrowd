#include <stdio.h>
int main()
{
    int n, m;
    while (1){
    scanf("%d %d", &n, &m);
    if (n==0&&m==0){
        break;
    }
    int ara2[n], ara3[m];
    for (int i=0; i<n; i++){
        ara2[i] = 0;
    }
    for (int j=0; j<m; j++){
        scanf("%d", &ara3[j]);
    }

    for (int i=1; i<=n; i++){
        for (int k=0; k<m; k++){
            if (ara3[k] == i){
                ara2[i-1] += 3;
            }
        }
    }
    int count=0;
    for (int l=0; l<n; l++){
        if (ara2[l] > 3){
            count++;
        }
    }
    printf("%d\n", count++);}
    return 0;
}
