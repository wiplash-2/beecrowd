#include <stdio.h>
int main()
{
    char str[30];
    int i=0;
    while(scanf(" %[^\n]%*c", str) != EOF){
        int n;
        scanf("%d", &n);
        int ara[n];
        for (int i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }
        for (int i=0; i<n; i++){
            printf("%c", str[ara[i]-1]);
        }printf("\n");
    }
    return 0;
}

