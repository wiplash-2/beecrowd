#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if (b==0){
            printf("divisao impossivel\n");
        }else{
            double result = (double) a / (double) b;
            printf("%0.1lf\n", result);
        }
    }
    return 0;
}
