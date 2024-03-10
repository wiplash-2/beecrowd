#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n) != EOF){
        n = (int)n/2;
        for (int i=0; i<n+1; i++){
            for (int j=n; j>i; j--){
                printf(" ");
            }
            for (int k=0; k<i+1; k++){
                printf("*");
            }
            for (int k=1; k<i+1; k++){
                printf("*");
            }
            
            printf("\n");
        }
        for (int m=0; m<n; m++){
            printf(" ");
        }printf("*\n");
        for (int m=1; m<n; m++){
            printf(" ");
        }printf("***\n");printf("\n");
    }
    return 0;
}
